//
//  main.cpp
//  Balanced Brackets
//
//  Created by Aarnav Gupta on 07/04/21.
//

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int test;
    cin >> test;
    getchar();
    while (test) {
        test--;
        stack<char> s;
        bool ans = true;
        string br;
        getline(cin, br);
        for (char c: br) {
            if (c == '(' or c == '{' or c == '[')
                s.push(c);
            else if (s.empty()) {
                ans = false;
                break;
            }
            else if (c == ')') {
                if (s.top() != '(') {
                    ans = false;
                    break;
                }
                else
                    s.pop();
            }
            else if (c == '}') {
                if (s.top() != '{') {
                    ans = false;
                    break;
                }
                else
                    s.pop();
            }
            else if (c == ']') {
                if (s.top() != '[') {
                    ans = false;
                    break;
                }
                else
                    s.pop();
            }
        }
        if (not s.empty())
            ans = false;
        if (ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

/*
3
[{()}]
{[(])}
{{[[(())]]}}
*/
