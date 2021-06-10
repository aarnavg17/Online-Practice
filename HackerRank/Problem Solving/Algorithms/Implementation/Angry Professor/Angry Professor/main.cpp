//
//  main.cpp
//  Angry Professor
//
//  Created by Aarnav Gupta on 11/06/21.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin >> t;
    while(t--) {
        int n, k, ontime = 0, temp;
        cin >> n >> k;
        while(n--) {
            cin >> temp;
            if (temp <= 0) ontime++;
        }
        if (ontime < k) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
