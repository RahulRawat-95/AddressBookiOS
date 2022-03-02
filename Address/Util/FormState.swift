//
//  FormState.swift
//  Address
//
//  Created by Rahul Rawat on 26/01/22.
//

import SwiftUI
import Foundation

struct FormState {
    var fields = [Field]()
    
    func validate() -> Bool {
        var valid = true
        for field in fields {
            if !field.validate() {
                valid = false
            }
        }
        return valid
    }
    
    func getData() -> [String: String] {
        return fields.reduce(into: [:]) { dict, item in
            dict[item.name] = item.text
        }
    }
}
