#include<iostream>
using namespace std;
int main (){
    string s,t;
    cin>>s;
    if (s[8]=='A'){
        if(s[0]=='1' && s[1]=='2'){
            t[0]='0';t[1]='0';
        }
        else{
            for (int i=0; i<=1; i++){
                t[i]=s[i];
            }
        }
    }
    else{
        if (s[0]=='0' && s[1]<='7'){
            t[0]='1'; t[1]=s[1]+2;
        }
        else if (s[0]=='1' && s[1]=='2'){
            for (int i=0; i<=1; i++){
                t[i]=s[i];
            }
        }
        else{
            t[0]='2';
            if (s[1]=='8' or s[1]=='9'){
                t[1]=s[1]-8;
            }
            else{
                t[1]=s[1]+2;
            }
        }
    }
    for (int i=2; i<=7; i++){
        t[i]=s[i];
    }
    for (int i=0; i<=7; i++){
        cout<<t[i];
    }
}
