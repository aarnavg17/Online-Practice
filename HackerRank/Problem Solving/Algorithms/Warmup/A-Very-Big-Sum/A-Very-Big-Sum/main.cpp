#include<iostream>
using namespace std;
int main (){
    int n;
    long long int ar[10],sum1=0;
    cin>>n;
    for (int i=0; i<n; i++){
        cin>>ar[i];
    }
    for (int i=0; i<n; i++){
        sum1+=ar[i];
    }
    cout<<sum1;
}
