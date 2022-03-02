//
//  SplashView.swift
//  Address
//
//  Created by Rahul Rawat on 23/01/22.
//

import Foundation
import SwiftUI

struct SplashView: View {
    @State var isActive: Bool = false
    
    var body: some View {
        VStack {
            ZStack {
                Color("BG")
                    .ignoresSafeArea()
                
                if self.isActive {
                    ContentView()
                } else {
                    Image("icon-splash")
                        .resizable()
                        .scaledToFit()
                        .frame(width: 100, height: 100, alignment: .center)
                        .foregroundColor(Color.white)
                }
            }
        }
        .onAppear {
            DispatchQueue.main.asyncAfter(deadline: .now() + 2.5) {
                withAnimation {
                    self.isActive = true
                }
            }
        }
    }
    
}
