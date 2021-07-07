//
//  main.cpp
//  Monk and Suffix Sort
//
//  Created by Aarnav Gupta on 07/07/21.
//

#include <iostream>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {
    string str;
    cin >> str;
    int k;
    cin >> k;
    vector<string> v;
    int len = (int)str.length();
    for(int i = 0; i < len; i++) {
        v.push_back(str);
        str.erase(str.begin());
    }
    set<string> s;
    for(int i = 0; i < len; i++) {
        s.insert(v[i]);
    }
    set<string> :: iterator it;
    int count = 0;
    for(it = s.begin(); it != s.end(); it++) {
        count++;
        if(count == k) {
            cout << *it << endl;
            return 0;
        }
    }
    return 0;
}
