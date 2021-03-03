#include <iostream>
#include <cassert>


int fibonacci_fast(int n) {
    if (n <= 1) {
        return (n);
    }
    else {
        long long int A = 0, B = 1, C;
        C = A + B;
        for (int i = 0; i < n - 2; i++) {
            A = B;
            B = C;
            C = A + B;
        }
        return (C);
    }
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}
