#include <iostream>

int get_fibonacci_last_digit(int n) {
    if (n <= 1) {
        return (n);
    }
    else {
        int A = 0, B = 1, C, S = 1;
        C = (A + B) % 10;
        for (int i = 0; i < n - 2; i++) {
            A = B;
            B = C;
            C = (A + B) % 10;
        }
        return (C);
    }
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit(n);
    std::cout << c << '\n';
}
