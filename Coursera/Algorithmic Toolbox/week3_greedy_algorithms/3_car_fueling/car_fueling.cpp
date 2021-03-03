#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int dist, int tank, vector<int> & stops, int n) {
    int curr = tank, pet = 0, i = 0; bool flag = false;
    while ((curr < dist) && (i < n-1) && (!flag)) {
        if ((stops[i] <= curr)&&
            (stops[i+1] > curr) &&
            (stops[i+1] - stops[i] <= tank)) {

            pet++;
            curr = stops[i] + tank;
        }
        i++;
        if (curr >= dist) {
            flag = true;
        }
    }
    if ((i == n-1) && (stops[i] <= curr) && (stops[i] + tank >= dist) && (curr < dist)) {
        pet++;
        flag = true;
    }
    if (curr >= dist) {
            flag = true;
    }
    if (flag)
        return pet;
    else
        return -1;
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(d, m, stops, n) << "\n";

    return 0;
}
