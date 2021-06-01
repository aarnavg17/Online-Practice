//
//  main.cpp
//  Variable Sized Arrays
//
//  Created by Aarnav Gupta on 01/06/21.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n, q, k, a, b, temp;
    cin >> n >> q;
    vector<vector<int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> k;
        for (int j = 0; j < k; j++) {
            cin >> temp;
            arr[i].push_back(temp);
        }
    }

    for (int i = 0; i < q; i++) {
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }

    return 0;
}
