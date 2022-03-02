//
//  ViewModel.swift
//  Address
//
//  Created by Rahul Rawat on 15/01/22.
//

import Foundation
import Combine
import AddressLib

class MainViewModel: ObservableObject {
    var pauseSync = false
    @Published var showProgressBar: Bool = false
    @Published var addresses: [Address] = []
    private var cancellable: [AnyCancellable] = []
    
    init() {
        startFetching()
        sync()
        if let flow = KodeinKt.repo?.fetchAddressFlow() {
            asPublisher(flow)
                .receive(on: DispatchQueue.main)
                .sink(receiveCompletion: { _ in
                    
                }, receiveValue: { [weak self] addresses in
                    self?.addresses = addresses.compactMap { $0 as? Address }
                }).store(in: &cancellable)
        }
    }
    
    func startFetching() {
        showProgressBar = true
        KodeinKt.repo?.fetchAddresses { [weak self] _, _ in
            guard let self = self else { return }
            
            self.showProgressBar = false
            
            DispatchQueue.main.asyncAfter(deadline: .now() + 60) { [weak self] in
                guard let self = self else { return }
                
                self.startFetching()
            }
        }
    }
    
    func deleteAddress(address: Address) {
        showProgressBar = true
        KodeinKt.repo?.deleteAddress(id: address.id) { [weak self] _, _ in
            guard let self = self else { return }
            
            self.showProgressBar = false
        }
    }
    
    func sync() {
        showProgressBar = true
        if pauseSync {
            recallSync()
        } else {
            KodeinKt.repo?.sync { [weak self] _, _ in
                self?.recallSync()
            }
        }
    }
    
    private func recallSync() {
        showProgressBar = false
        DispatchQueue.main.asyncAfter(deadline: .now() + 2 * 60) { [weak self] in
            guard let self = self else { return }
            
            self.sync()
        }
    }
    
    deinit {
        cancellable.removeAll()
    }
}
