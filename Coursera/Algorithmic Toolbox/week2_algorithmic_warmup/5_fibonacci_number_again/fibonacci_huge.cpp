#include <iostream>

unsigned long long int pisano(unsigned long long int m) {
    unsigned long long int a = 0, b = 1, c = a + b, i = 0;

    do {
        i += 1;
        c = (a + b) % m;
        a = b;
        b = c;
    }while (a != 0 || b != 1);

    return (i);
}

unsigned long long int fib(unsigned long long int n, unsigned long long int m) {
    if (n <= 1) {
        return (n);
    }
    else {
        unsigned long long int A = 0, B = 1, C;
        C = A + B;
        for (unsigned long long int i = 0; i < n - 2; i++) {
            A = B;
            B = C;
            C = (A + B) % m;
        }
        return (C);
    }
}

unsigned long long int get_fibonacci_huge(unsigned long long int n, unsigned long long int m) {
    unsigned long long int l = pisano(m);
    unsigned long long int r = n % l;
    //std::cout << r << " " << m;
    return (fib(r, m) % m);
}

int main() {
    unsigned long long int n, m;
    std::cin >> n >> m;
    std::cout << get_fibonacci_huge(n, m) << '\n';
    //std::cout << pisano(m) << '\n';
}
