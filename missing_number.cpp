#include <iostream>

int main() {
    int n;
    std::cin >> n;

    bool arr[n + 1] = {
        false
    };
    for (int i = 1; i < n; ++i) {
        int m;
        std::cin >> m;
        arr[m] = true;
    }

    for (int i = 1; i <= n; ++i) {
        if (!arr[i]) {
            std::cout << i << "\n";
            return 0;
        }
    }

    return 0;
}
