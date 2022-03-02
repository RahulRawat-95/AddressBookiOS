//
//  Array+Extensions.swift
//  Address
//
//  Created by Rahul Rawat on 23/01/22.
//

import Foundation

extension Array where Element == String? {
    func concatenate(separator: String = " ") -> String {
        var concatenatedString = ""
        
        for index in 0..<self.count {
            if let item = self[index], item.isEmpty == false {
                concatenatedString += item
                
                if index < self.count - 1 {
                    concatenatedString += separator
                }
            }
        }
        
        return concatenatedString
    }
}
