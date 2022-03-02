//
//  ContentView.swift
//  Address
//
//  Created by Rahul Rawat on 09/01/22.
//

import SwiftUI
import Combine
import AddressLib

struct ContentView: View {
    @State private var showAddScreen = false
    @ObservedObject var viewModel = MainViewModel()
    
    init() {
        //Use this if NavigationBarTitle is with Large Font
        UINavigationBar.appearance().largeTitleTextAttributes = [.foregroundColor: UIColor.white]
        
        //Use this if NavigationBarTitle is with displayMode = .inline
        UINavigationBar.appearance().titleTextAttributes = [.foregroundColor: UIColor.white]
    }
    
    var body: some View {
        NavigationView {
            ZStack {
                Color("BG").ignoresSafeArea()
                if viewModel.addresses.isEmpty {
                    VStack {
                        Text("Your address book is blank")
                            .foregroundColor(.white)
                            .font(.headline)
                            .multilineTextAlignment(.center)
                            .padding(EdgeInsets(top: 0, leading: 0, bottom: 10, trailing: 0))
                        Text("Kindly add shipping / billing address and enjoy faster checkout")
                            .foregroundColor(.white)
                            .font(.subheadline)
                            .multilineTextAlignment(.center)
                            .padding(EdgeInsets(top: 0, leading: 30, bottom: 0, trailing: 30))
                    }.padding(EdgeInsets(top: 0, leading: 20, bottom: 0, trailing: 20))
                } else {
                    List(viewModel.addresses) { address in
                        ZStack {
                            Color("BG").ignoresSafeArea()
                            AddressRow(address: address)
                        }
                        .background(NavigationLink("", destination: AddUpdateAddressView(address: address)).opacity(0))
                        .swipeActions {
                            Button(role: .destructive) {
                                viewModel.deleteAddress(address: address)
                            } label: {
                                Label("", systemImage: "trash")
                            }
                        }
                        .listRowInsets(.init())
                    }
                    .listStyle(PlainListStyle())
                }
            }
            .onAppear(perform: {
                viewModel.pauseSync = true
            })
            .onDisappear(perform: {
                viewModel.pauseSync = false
            })
            .navigationTitle("Addresses")
            .toolbar {
                NavigationLink(destination: AddUpdateAddressView(address: nil), isActive: $showAddScreen, label: {
                    Button(action: {
                        self.showAddScreen = true
                    }, label: {
                        Image(systemName: "plus")
                    })
                })
            }
        }
        .accentColor(.white)
    }
}

struct AddressRow: View {
    var address: Address
    
    var body: some View {
        VStack {
            HStack {
                VStack {
                    NonBlankText(
                        texts: [address.firstname, address.lastname],
                        maxLines: 1
                    )
                    
                    NonBlankText(
                        texts: [address.address1, address.address2],
                        maxLines: 2
                    )
                    
                    NonBlankText(
                        texts: [address.city, address.zipcode],
                        maxLines: 1
                    )
                    
                    NonBlankText(
                        texts: [address.phone],
                        maxLines: 1
                    )
                }
                
                VStack {
                    if address.is_default == true {
                        Image("icon-check")
                            .resizable()
                            .scaledToFit()
                            .frame(width: 20, height: 20, alignment: .center)
                    }
                }
            }
        }
        .padding(EdgeInsets(top: 10, leading: 20, bottom: 10, trailing: 20))
        .listRowBackground(Color.clear)
        .listRowSeparator(.hidden)
    }
}

struct NonBlankText: View {
    var texts: [String?]
    var maxLines: Int
    
    var body: some View {
        HStack {
            let textToDisplay = texts.concatenate().trimmingCharacters(in: .whitespacesAndNewlines)
            if !textToDisplay.isEmpty {
                Text(textToDisplay)
                    .lineLimit(maxLines)
                    .truncationMode(.tail)
                    .frame(maxWidth: .infinity, alignment: .leading)
                    .foregroundColor(Color.white)
            }
        }
    }
}
