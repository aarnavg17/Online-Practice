#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for (int i=n-1; i>=0; i--){
        for (int j=1; j<=i; j++){
            cout<<" ";
        }
        for (int x=1; x<=n-i; x++){
            cout<<"#";
        }
        cout<<endl;
    }
}