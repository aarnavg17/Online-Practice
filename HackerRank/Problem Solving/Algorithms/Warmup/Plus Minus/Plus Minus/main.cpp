//
//  main.cpp
//  Plus Minus
//
//  Created by Aarnav Gupta on 10/04/21.
//

#include <iostream>
using namespace std;
int main (){
    int n, a[100];
    double p = 0, neg = 0, z = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
        if (a[i] > 0)
            p++;
        else if (a[i] < 0)
            neg++;
        else
            z++;
    cout << p/n << endl << neg/n << endl << z/n;
}

