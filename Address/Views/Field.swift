//
//  Field.swift
//  Address
//
//  Created by Rahul Rawat on 26/01/22.
//

import SwiftUI

struct Field: View, Identifiable {
    var id: Int
    
    var name: String
    var label: String = ""
    var initialText: String?
    var validators: [Validator]
    
    @ObservedObject var viewModel: FieldViewModel
    
    var text: String { viewModel.text }

    init(id: Int, name: String, label: String, initialText: String?, validators: [Validator]) {
        self.id = id
        self.name = name
        self.label = label
        self.initialText = initialText
        self.validators = validators
        
        viewModel = FieldViewModel(error: "", hasError: false, text: initialText ?? "")
    }
    
    var body: some View {
        VStack {
            TextField(label, text: $viewModel.text)
                .textFieldStyle(.roundedBorder)
                .font(.body)
                .padding(EdgeInsets(top: 0, leading: 0, bottom: 0, trailing: 0))
                .onChange(of: viewModel.text) { text in
                    hideError()
                }
                .accentColor(.black)
            
            Text(viewModel.error)
                .foregroundColor(.red)
                .font(.footnote)
                .frame(maxWidth: .infinity, alignment: .leading)
        }
    }
    
    func clear() {
        viewModel.hasError = false
        viewModel.text = ""
        viewModel.error = ""
    }
    
    private func showError(error: String) {
        viewModel.hasError = true
        viewModel.error = error
    }
    
    private func hideError() {
        viewModel.hasError = false
        viewModel.error = ""
    }
    
    func validate() -> Bool {
        for validator in validators {
            switch validator {
            case .Required(let message):
                if viewModel.text.isEmpty {
                    showError(error: message)
                    return false
                }
            case .Length(let length, let message):
                if viewModel.text.count < length {
                    showError(error: message)
                    return false
                }
            }
        }
        return true
    }
}
