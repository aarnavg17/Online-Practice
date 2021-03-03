#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n, k = 0, j = -1;
  int mul2, mul3, plus1, ans;
  cin >> n;
  int counts[n+1], klist[n+1], anslist[n+1];
  counts[0] = 0;
  counts[1] = 0;
  klist[0] = 0;
  klist[1] = 1;
  anslist[0] = 1;
  for (int i = 2; i <= n; i++) {
    //j++;
    if (!(i%2)) {
        mul2 = counts[i/2] + 1;
    }
    else {
        mul2 = 10000;
    }
    if (!(i%3)) {
        mul3 = counts[i/3] + 1;
    }
    else {
        mul3 = 10000;
    }
    plus1 = counts[i-1] + 1;
    /*if (i == 6) {
        cout << mul2 << " " << mul3 << " " << plus1 << endl;
    }*/
    if (mul2 <= mul3 && mul2 <= plus1) {
        counts[i] = mul2;
        klist[i] = i/2;
        //cout << i << " mul2" << "\n";
    }
    else if (mul3 <= mul2 && mul3 <= plus1) {
        counts[i] = mul3;
        klist[i] = i/3;
        //cout << i << " mul3" << "\n";
    }
    else {
        counts[i] = plus1;
        klist[i] = i-1;
        //cout << i << " plus1" << "\n";
    }
    //counts[i] = min(mul2, mul3, plus1);
    /*if (counts[i] == mul2) {

    }
    else if (counts[i] == mul3) {

    }
    else {

    }*/
  }
  int x = -1, cnt = counts[n];
  cout << cnt << endl;
  cout << "1 ";
  /*for (int i = 0; i <= n; i++) {
    cout << counts[i] << " ";
  }*/
  anslist[cnt] = n;
  //int i = cnt - 1;
  //cout << klist[20];
  //cout << "aese" << klist[anslist[cnt]];
  for (int i = cnt-1; i >= 1; i--) {
    anslist[i] = klist[anslist[i+1]];
  }
  for (int i = 1; i <= cnt; i++) {
    cout << anslist[i] << " ";
  }
}
