#include <iostream>

int get_change(int m) {
  int change = 0;
  change += (m/10);
  m %= 10;
  change += (m/5);
  m %= 5;
  change += m;
  return change;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
