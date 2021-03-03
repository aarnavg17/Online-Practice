#include <iostream>
using namespace std;

int get_change(int m) {
  //write your code here
  int coins[3] = {1, 3, 4};
  int mini[m+1];
  mini[0] = 0;
  mini[1] = 1;
  for (int i = 2; i <= m; i++) {
    mini[i] = 1001;
    for (int x: coins) {
        //cout << x << endl;
        if (i >= x)
            //cout << mini[i] << endl;
            mini[i] = min(mini[i], mini[i-x]+1);
    }
  }
  return mini[m];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
