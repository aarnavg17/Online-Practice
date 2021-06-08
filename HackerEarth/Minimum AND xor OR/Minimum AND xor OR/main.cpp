//
//  main.cpp
//  Minimum AND xor OR
//
//  Created by Aarnav Gupta on 08/06/21.
//

/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;                                        // Reading input from STDIN
    cout << "Input number is " << num << endl;        // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <algorithm>
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long int N;
        cin >> N;
        long long int A[N], min = INT64_MAX;
        for (int i = 0; i < N; i++) cin >> A[i];
        sort(A, A+N);
        for (long long int i = 0; i < N-1; i++) {
            long long int calc = A[i] ^ A[i+1];
            if (calc < min) min = calc;
        }
        cout << min << endl;
    }
}

/*
3
5
1 2 3 4 5
3
2 4 7
5
3 6 8 4 5
*/

/*
1
3
1
*/
