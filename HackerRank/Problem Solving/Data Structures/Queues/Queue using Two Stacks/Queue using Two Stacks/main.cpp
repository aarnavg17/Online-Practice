//
//  main.cpp
//  Queue using Two Stacks
//
//  Created by Aarnav Gupta on 11/06/21.
//

#include <iostream>
#include <queue>
using namespace std;


int main() {
    queue<int> q;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 1) {
            cin >> n;
            q.push(n);
        }
        else if (n == 2) q.pop();
        else cout << q.front() << endl;
    }
    return 0;
}
