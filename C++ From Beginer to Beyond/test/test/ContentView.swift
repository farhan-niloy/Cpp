//
//  ContentView.swift
//  test
//
//  Created by Farhan Niloy on 3/4/23.
//

import SwiftUI

struct ContentView: View {
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.small
                )
                .foregroundColor(.red)
            Text("Hello, world!")
                .font(.headline)
                .multilineTextAlignment(.left)
        }
        .padding(.vertical, 500.0)
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
