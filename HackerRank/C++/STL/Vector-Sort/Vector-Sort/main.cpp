//
//  main.cpp
//  Vector-Sort
//
//  Created by Aarnav Gupta on 11/06/21.
//

#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int N, temp;
    cin >> N;
    vector<long long int> V;
    for(int i = 0; i < N; i++) {
        cin >> temp;
        V.push_back(temp);
    }
    sort(V.begin(), V.end());
    for(int i: V) cout << i << " ";
    return 0;
}
