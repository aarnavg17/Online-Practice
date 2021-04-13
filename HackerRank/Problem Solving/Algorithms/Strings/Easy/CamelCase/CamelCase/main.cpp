//
//  main.cpp
//  CamelCase
//
//  Created by Aarnav Gupta on 12/04/21.
//

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int cnt = 1;
    for (char ch: s)
        if (ch >= 'A' and ch <= 'Z')
            cnt++;
    return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
