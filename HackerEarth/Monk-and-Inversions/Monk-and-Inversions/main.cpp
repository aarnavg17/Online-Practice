#include<iostream>
using namespace std;
int main() {
    int T;
    cin >> T;
    while(T) {
        T--;
        int N;
        cin >> N;
        int A[N][N];
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> A[i][j];
        int cnt = 0;
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                for (int p = i; p < N; p++)
                    for (int q = j; q < N; q++)
                        if (A[i][j] > A[p][q])
                            cnt++;
        cout << cnt << endl;
    }
}
