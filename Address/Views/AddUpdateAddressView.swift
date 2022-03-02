//
//  AddUpdateAddressView.swift
//  Address
//
//  Created by Rahul Rawat on 23/01/22.
//

import Foundation
import SwiftUI
import AddressLib

struct AddUpdateAddressView: View {
    @Environment(\.presentationMode) var presentationMode: Binding<PresentationMode>
    var address: Address?
    @ObservedObject var viewModel = AddUpdateViewModel()
    
    var body: some View {
        ZStack {
            Color("BG").ignoresSafeArea()
            FormContainer(address: address, checkedState: address?.is_default as? Bool ?? false) { dict, isChecked in
                viewModel.addOrUpdateAddress(addressSerialized: address, map: dict, isDefault: isChecked)
            }
            .padding(EdgeInsets(top: 0, leading: 20, bottom: 0, trailing: 20))
            
            if viewModel.showProgressBar {
                Color(uiColor: UIColor(red: 1.0, green: 1.0, blue: 1.0, alpha: 0.3)).ignoresSafeArea()
                ProgressView().frame(alignment: .center)
            }
        }
        .navigationTitle(address == nil ? "Add Address" : "Update Address")
        .onReceive(viewModel.$successfullySubmitted) { success in
            if success {
                presentationMode.wrappedValue.dismiss()
            }
        }
    }
}

struct FormContainer: View {
    var address: Address?
    @State var state: FormState
    @State var checkedState: Bool
    var onSubmit: ([String:String], Bool) -> Void
    
    init(address: Address?, checkedState: Bool, onSubmit: @escaping ([String:String], Bool) -> Void) {
        self.address = address
        self.checkedState = checkedState
        self.onSubmit = onSubmit
        self.state = FormState(fields: [
            Field(
                id: 1,
                name: AddUpdateViewModel.KEY_FIRSTNAME,
                label: "First Name",
                initialText: address?.firstname,
                validators: [Validator.Required()]
            ),
            Field(
                id: 2,
                name: AddUpdateViewModel.KEY_LASTNAME,
                label: "Last Name",
                initialText: address?.lastname,
                validators: [Validator.Required()]
            ),
            Field(
                id: 3,
                name: AddUpdateViewModel.KEY_ADDRESS_1,
                label: "Address Line 1",
                initialText: address?.address1,
                validators: [Validator.Required()]
            ),
            Field(
                id: 4,
                name: AddUpdateViewModel.KEY_ADDRESS_2,
                label: "Address Line 2",
                initialText: address?.address2,
                validators: [Validator.Required()]
            ),
            Field(
                id: 5,
                name: AddUpdateViewModel.KEY_CITY,
                label: "City",
                initialText: address?.city,
                validators: [Validator.Required()]
            ),
            Field(
                id: 6,
                name: AddUpdateViewModel.KEY_ZIPCODE,
                label: "Zipcode",
                initialText: address?.zipcode,
                validators: [Validator.Required(), Validator.Length(length: 5)]
            ),
            Field(
                id: 7,
                name: AddUpdateViewModel.KEY_PHONE,
                label: "Phone",
                initialText: address?.phone,
                validators: [Validator.Required(), Validator.Length(length: 10)]
            ),
            Field(
                id: 8,
                name: AddUpdateViewModel.KEY_STATENAME,
                label: "State Name",
                initialText: address?.state_name,
                validators: [Validator.Required()]
            ),
            Field(
                id: 9,
                name: AddUpdateViewModel.KEY_ALT_PHONE,
                label: "Alternative Phone",
                initialText: address?.phone,
                validators: [Validator.Required()]
            ),
            Field(
                id: 10,
                name: AddUpdateViewModel.KEY_COMPANY,
                label: "Company",
                initialText: address?.company,
                validators: [Validator.Required()]
            )
        ])
    }
    
    var body: some View {
        ScrollView(showsIndicators: false) {
            VStack {
                Form(formState: state)
                
                Toggle("Make this my default address", isOn: $checkedState)
                    .toggleStyle(CheckboxStyle())
                    .foregroundColor(.white)
                
                Button(address == nil ? "Submit" : "Update") {
                    if state.validate() {
                        onSubmit(state.getData(), checkedState)
                    }
                }
                .padding()
                .background(.white)
                .foregroundColor(.black)
                .clipShape(Capsule())
                .padding(EdgeInsets(top: 20, leading: 0, bottom: 0, trailing: 0))
            }
        }
    }
}

struct CheckboxStyle: ToggleStyle {
 
    func makeBody(configuration: Self.Configuration) -> some View {
 
        return HStack {
 
            configuration.label
 
            Spacer()
 
            Image(systemName: configuration.isOn ? "checkmark.circle.fill" : "circle")
                .resizable()
                .frame(width: 24, height: 24)
                .foregroundColor(configuration.isOn ? .green : .white)
                .font(.system(size: 20, weight: .bold, design: .default))
                .onTapGesture {
                    configuration.isOn.toggle()
                }
        }
 
    }
}

struct Form: View {
    var formState: FormState
    
    var body: some View {
        VStack {
            ForEach(formState.fields) {
                $0
            }
        }
    }
}
