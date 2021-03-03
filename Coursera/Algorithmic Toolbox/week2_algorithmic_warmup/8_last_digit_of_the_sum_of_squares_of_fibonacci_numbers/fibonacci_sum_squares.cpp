#include <iostream>

int get_fibonacci_last_digit(int n) {

    if (n <= 1) {
        return (n);
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
            S += (C * C);
            S %= 10;
        }
        return (S);
    }
}

int main() {
    long long int n;
    std::cin >> n;
    n %= 60;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
}
