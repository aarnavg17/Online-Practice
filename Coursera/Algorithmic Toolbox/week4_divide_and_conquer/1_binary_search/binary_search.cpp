#include <iostream>
#include <cassert>
#include <vector>

using std::vector;

int binary_search(const vector<int> &a, int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
            return mid;

        else if (a[mid] > x)
            return binary_search(a, l, mid - 1, x);

        return binary_search(a, mid + 1, r, x);
    }
    return -1;

}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> b[i];
  }

  int s = (int)a.size();
  for (int i = 0; i < m; ++i) {
    std::cout << binary_search(a, 0, s - 1, b[i]) << ' ';
  }
}
