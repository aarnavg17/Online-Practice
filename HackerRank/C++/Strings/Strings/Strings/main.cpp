//
//  main.cpp
//  Strings
//
//  Created by Aarnav Gupta on 12/06/21.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    cout << A.length() << " " << B.length() << endl << A + B << endl;
    char c = A[0];
    A[0] = B[0];
    B[0] = c;
    cout << A << " " << B;
  
    return 0;
}
