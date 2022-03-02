//
//  AddUpdateViewModel.swift
//  Address
//
//  Created by Rahul Rawat on 26/01/22.
//

import Foundation
import Combine
import AddressLib

class AddUpdateViewModel: ObservableObject {
    @Published var showProgressBar: Bool = false
    @Published var successfullySubmitted = false
    
    func addOrUpdateAddress(
        addressSerialized: Address?,
        map: [String: String],
        isDefault: Bool
    ) {
        if let repo = KodeinKt.repo {
            showProgressBar = true
            if (addressSerialized != nil) {
                repo.updateAddress(
                    address: Address(
                        id: addressSerialized!.id,
                        firstname: map[AddUpdateViewModel.KEY_FIRSTNAME],
                        lastname: map[AddUpdateViewModel.KEY_LASTNAME],
                        address1: map[AddUpdateViewModel.KEY_ADDRESS_1] ?? "",
                        address2: map[AddUpdateViewModel.KEY_ADDRESS_2],
                        city: map[AddUpdateViewModel.KEY_CITY] ?? "",
                        zipcode: map[AddUpdateViewModel.KEY_ZIPCODE] ?? "",
                        phone: map[AddUpdateViewModel.KEY_PHONE],
                        state_name: map[AddUpdateViewModel.KEY_STATENAME],
                        alternative_phone: map[AddUpdateViewModel.KEY_ALT_PHONE],
                        company: map[AddUpdateViewModel.KEY_COMPANY],
                        state_id: addressSerialized!.state_id,
                        country_id: addressSerialized!.country_id,
                        crud_state: CrudState.update,
                        is_default: KotlinBoolean(booleanLiteral: isDefault)
                    )
                ) { [weak self] _, _ in
                    guard let self = self else { return }
                    
                    self.showProgressBar = false
                    self.successfullySubmitted = true
                }
            } else {
                repo.createAddress(
                    address: Address(
                        id: 0,
                        firstname: map[AddUpdateViewModel.KEY_FIRSTNAME],
                        lastname: map[AddUpdateViewModel.KEY_LASTNAME],
                        address1: map[AddUpdateViewModel.KEY_ADDRESS_1] ?? "",
                        address2: map[AddUpdateViewModel.KEY_ADDRESS_2],
                        city: map[AddUpdateViewModel.KEY_CITY] ?? "",
                        zipcode: map[AddUpdateViewModel.KEY_ZIPCODE] ?? "",
                        phone: map[AddUpdateViewModel.KEY_PHONE],
                        state_name: map[AddUpdateViewModel.KEY_STATENAME],
                        alternative_phone: map[AddUpdateViewModel.KEY_ALT_PHONE],
                        company: map[AddUpdateViewModel.KEY_COMPANY],
                        state_id: 1,
                        country_id: 2,
                        crud_state: CrudState.create,
                        is_default: KotlinBoolean(booleanLiteral: isDefault)
                    )
                ) { [weak self] _, _ in
                    guard let self = self else { return }
                    
                    self.showProgressBar = false
                    self.successfullySubmitted = true
                }
            }
        }
    }
}

extension AddUpdateViewModel {
    static let KEY_FIRSTNAME = "firstname"
    static let KEY_LASTNAME = "lastname"
    static let KEY_ADDRESS_1 = "address1"
    static let KEY_ADDRESS_2 = "address2"
    static let KEY_CITY = "city"
    static let KEY_ZIPCODE = "zipcode"
    static let KEY_PHONE = "phoen"
    static let KEY_STATENAME = "statename"
    static let KEY_ALT_PHONE = "altphone"
    static let KEY_COMPANY = "company"
}
