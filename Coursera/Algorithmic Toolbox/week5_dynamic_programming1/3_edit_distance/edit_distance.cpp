#include<iostream>
//#define int long long
using namespace std;

int main() {
	string s1,s2;
	cin >> s1 >> s2;

	long long int mat[s1.length() + 1][s2.length() + 1];

	for(long long int i = 0; i <= s1.length(); i++) {
        mat[i][0]=i;
	}

	for(long long int i = 0; i <= s2.length(); i++) {
        mat[0][i] = i;
	}

	for(long long int i = 1; i <= s1.length(); i++) {
		for(long long int j = 1; j <= s2.length(); j++) {
			long long int a = 0;
			if(s1[i-1] == s2[j-1]) {
				a = mat[i-1][j-1];
			}
			else {
			    a = mat[i-1][j-1]+1;
			}
			mat[i][j] = min(min(mat[i-1][j] + 1, mat[i][j-1] + 1), a);
		}
	}
	cout << mat[s1.length()][s2.length()];
	return 0;
}

