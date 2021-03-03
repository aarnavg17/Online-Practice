#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<long long int> &nums, int lo, int hi) {
    if (lo == hi)   return nums[lo];
    //std::cout << hi;
    int mid = (hi-lo)/2 + lo;
    int left = get_majority_element(nums, lo, mid);
    int right = get_majority_element(nums, mid+1, hi);

    if (left == right)  return left;

    int left_count = 0;
    for (int i = lo; i <= hi; i++)  if (nums[i] == left)    left_count++;
    int right_count = 0;
    for (int i = lo; i <= hi; i++)  if (nums[i] == right)    right_count++;

    int len = hi - lo + 1;
    if (left_count > len/2) return left;
    else if (right_count > len/2)    return right;
    else    return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<long long int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  int ans = get_majority_element(a, 0, a.size() - 1);
  if (ans > 0)  ans = 1;
  else if (ans == -1)   ans = 0;
  std::cout << ans << '\n';
}
