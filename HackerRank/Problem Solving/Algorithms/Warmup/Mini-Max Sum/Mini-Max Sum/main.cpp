//
//  main.cpp
//  Mini-Max Sum
//
//  Created by Aarnav Gupta on 10/04/21.
//

#include<iostream>
using namespace std;
int main () {
    long int arr[5];
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    long int min = arr[0], max = arr[0], sum1 = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
        sum1 += arr[i];
    }
    cout << sum1 - max << " " << sum1 - min;
}

