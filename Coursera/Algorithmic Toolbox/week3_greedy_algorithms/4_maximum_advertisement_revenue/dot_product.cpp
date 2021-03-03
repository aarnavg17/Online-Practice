#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
using namespace std;

long long max_dot_product(vector<int> a, vector<int> b) {
  // write your code here
  int sizeis = a.size(), i1, i2;
  long long int ans[sizeis] = {1}, max1, max2, temp;
  for (int x = 0; x < sizeis; x++) {
    max1 = -100001; max2 = -100001; i1 = -1; i2 = -1, temp = -1;
    //cout << endl << "sizeis - x - 1: " << sizeis - x - 1 << endl << "x: " << x << endl;
    for (int i = 0; i <= sizeis - x - 1; i++) {
        if (a[i] > max1) {
            max1 = a[i];
            i1 = i;
        }
    }
    //cout << "max1: " << max1 << endl;
    //cout << "a[sizeis - x - 1]: " << a[sizeis - x - 1] << endl;
    temp = a[sizeis - x - 1];
    a[sizeis - x - 1] = a[i1];
    //cout << "a[i1]: " << a[i1] << endl;
    a[i1] = temp;
    //cout << "temp: " << temp << endl;

    for (int i = 0; i <= sizeis - x - 1; i++) {
        if (b[i] > max2) {
            max2 = b[i];
            i2 = i;
        }
    }
    //cout << "max2: " << max2 << endl;
    temp = b[sizeis - x - 1];
    b[sizeis - x - 1] = b[i2];
    //cout << "b[i1]: " << b[i1] << endl;
    b[i2] = temp;
    //cout << "temp: " << temp << endl;

    //cout << "a: " << endl;
    /*for (int i = 0; i < sizeis; i++) {
        cout << a[i] << " ";
    }*/
    /*cout << endl << "b: " << endl;
    for (int i = 0; i < sizeis; i++) {
        cout << b[i] << " ";
    }*/
    //cout << "a last: " << a[sizeis - 1] << endl;
    //cout << "b last: " << b[sizeis - 1] << endl;
    ans[x] = max1 * max2;
    /*cout << endl << "ans: ";
    for (int i = 0; i <= x; i++) {
        cout << ans[i] << " ";
    }*/
  }
  //cout << endl << endl << endl;
  long long int result = 0;
  for (int i = 0; i < sizeis; i++) {
    //cout << ans[i] << endl;
    result += ans[i];
  }
  return result;
}

int main() {
  size_t n;
  std::cin >> n;
  vector<int> a(n), b(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  for (size_t i = 0; i < n; i++) {
    std::cin >> b[i];
  }
  std::cout << max_dot_product(a, b) << std::endl;
}
