// https://cses.fi/problemset/task/1068/
#include <iostream>

void solution(long n) {
    while (n != 1) {
        std::cout << n << " ";
        if (n % 2)
            n = (n * 3) + 1;
        else
            n >>= 1;
    }

    std::cout << 1 << "\n";
}

int main() {
    long n;
    std::cin >> n;
    solution(n);
    return 0;
}

