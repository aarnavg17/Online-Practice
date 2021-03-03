#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s[10]; int T;
    cin>>T;
    cin.ignore();
    for (int i=0; i<T; i++){
        getline(cin,s[i]);
    }
    for (int i=0; i<T; i++){
        for (int j=0; j<s[i].length(); j+=2){
            cout<<" "<<s[i][j]<<" ";
            cout<<i<<" "<<j;
        }
        cout<<" ";
        for (int j=1; j<s[i].length(); j+=2){
            cout<<s[i][j];
            cout<<i<<" "<<j;
        }
        cout<<endl;
    }
    return 0;
}
