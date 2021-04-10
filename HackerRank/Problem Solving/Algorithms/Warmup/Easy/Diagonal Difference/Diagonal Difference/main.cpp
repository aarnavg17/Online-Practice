//
//  main.cpp
//  Diagonal Difference
//
//  Created by Aarnav Gupta on 10/04/21.
//

#include<iostream>
using namespace std;

int main () {
    int n, a, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a;
            if (i == j)
                sum1 += a;
            if (i + j == n-1)
                sum2 += a;
        }
    if (sum1 > sum2)
        cout<<sum1-sum2;
    else
        cout<<sum2-sum1;
}

