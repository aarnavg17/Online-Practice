#include <iostream>
#include <vector>

using std::vector;

double get_optimal_value(double capacity, vector<double> weights, vector<double> values, vector<double> used, int n) {
  double value = 0.0;
  double curw = capacity, maxi, sumw = 0, sumv = 0;
  for (int i = 0; i < n; i++) {
    sumw += weights[i];
    sumv += values[i];
  }
  if (sumw < capacity) {
    value = sumv;
  }
  else {
      while (curw > 0) {
        maxi = -1;
        for (int i = 0; i < n; i++) {
            if ((used[i] == 0) && ((maxi == -1) || ((values[i]/ weights[i]) > values[maxi]/ weights[maxi]))) {
                maxi = i;
            }
        }
        used[maxi] = 1;
        curw -= weights[maxi];
        value += values[maxi];
        if (curw < 0) {
            value -= values[maxi];
            value += ((values[maxi]/weights[maxi]) * (weights[maxi] + curw));
        }
      }
  }
  return value;
}

int main() {
  int n;
  double capacity;
  std::cin >> n >> capacity;
  vector<double> values(n);
  vector<double> weights(n);
  vector<double> used(n);
  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];
    used[i] = 0;
  }
  double optimal_value = get_optimal_value(capacity, weights, values, used, n);

  std::cout.precision(10);
  std::cout << optimal_value << std::endl;
  return 0;
}
