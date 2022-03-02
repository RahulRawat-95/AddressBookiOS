//
//  AppDelegate.swift
//  Address
//
//  Created by Rahul Rawat on 09/01/22.
//

import UIKit
import AddressLib

class AppDelegate: NSObject, UIApplicationDelegate {
    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey : Any]? = nil) -> Bool {
        KodeinKt.doInitKodein(enableNetworkLogs: true, appDeclaration: {_ in })
        return true
    }
}
