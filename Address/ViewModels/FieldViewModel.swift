//
//  FieldViewModel.swift
//  Address
//
//  Created by Rahul Rawat on 26/01/22.
//

import Combine

class FieldViewModel: ObservableObject {
    @Published var error: String
    @Published var hasError: Bool
    @Published var text: String
    
    init(error: String, hasError: Bool, text: String) {
        self.error = error
        self.hasError = hasError
        self.text = text
    }
}
