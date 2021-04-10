//
//  main.cpp
//  Maximum Element
//
//  Created by Aarnav Gupta on 06/04/21.
//

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<long long int> m;
    long long int test;
    cin >> test;
    for (int t = 0; t < test; t++) {
        int a;
        cin >> a;
        if (a == 1) {
            long long int b;
            cin >> b;
            if (m.empty() || b >= m.top())
                m.push(b);
            else
                m.push(m.top());
        }
        else if (a == 2)
            m.pop();
        else if (a == 3)
            cout << m.top() << endl;
    }
}

