//
//  main.cpp
//  Arrays Introduction
//
//  Created by Aarnav Gupta on 12/06/21.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int A[1000], N;
    cin >> N;
    for (int i = 0; i < N; i++){
        cin >> A[i];
    }
    for (int i = N - 1; i >= 0; i--){
        cout << A[i] << " ";
    }
    return 0;
}

