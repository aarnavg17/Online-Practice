//
//  main.cpp
//  Birthday Cake Candles
//
//  Created by Aarnav Gupta on 10/04/21.
//

#include <iostream>

using namespace std;

int main () {
    int n, cnt = 0, max;
    cin >> n;
    max = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp > max) {
            max = temp;
            cnt = 0;
        }
        if (temp == max)
            cnt++;
    }
    cout << cnt;
}

