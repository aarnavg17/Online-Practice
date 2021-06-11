//
//  main.cpp
//  Basic Data Types
//
//  Created by Aarnav Gupta on 12/06/21.
//

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a; long b; char c; float d; double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl;
    printf("%.3f", d);
    cout << endl;
    printf("%.9f", e);
    return 0;
}

