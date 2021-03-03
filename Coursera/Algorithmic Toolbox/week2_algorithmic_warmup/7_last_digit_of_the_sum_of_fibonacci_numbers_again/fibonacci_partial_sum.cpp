#include <iostream>
#include <vector>
using std::vector;

int get_fibonacci_last_digit(int n) {
    if (n <= 0) {
        return (0);
    }
    if (n == 1) {
        return(1);
    }
    else {
        int A = 0, B = 1, C, S = 1;
        C = (A + B) % 10;
        S += C;
        S %= 10;
        for (int i = 0; i < n - 2; i++) {
            A = B;
            B = C;
            C = (A + B) % 10;
            S += C;
            S %= 10;
        }
        return (S);
    }
}

int get_fibonacci_partial_sum(int from, int to) {
    int S1 = get_fibonacci_last_digit(from), S2 = get_fibonacci_last_digit(to);
    int X = S2 - S1;
    //std::cout << X;
    if (X < 0){
        X += 10;
    }
    return (X);
}

int main() {
    long long from, to;
    std::cin >> from >> to;
    from %= 60;
    from--;
    to %= 60;
    std::cout << get_fibonacci_partial_sum(from, to) << '\n';
}
