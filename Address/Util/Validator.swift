//
//  Validator.swift
//  Address
//
//  Created by Rahul Rawat on 25/01/22.
//

import Foundation

enum Validator {
    case Required(message: String = "This field is required")
    case Length(length: Int, message: String = "Length is wrong")
}
