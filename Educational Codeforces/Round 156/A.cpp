#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n; 
        std::cin >> n;
        if (n <= 6) {
            std::cout << "NO" << '\n';
            continue;
        }
        
        int a = 1, b = 2;
        int c = n - 3;
        if (n % 3 == 0) {
            b += 2;
            c -= 2;
        }

        if (b == c) {
            std::cout << "NO" << '\n';
            continue;
        }
        std::cout << "YES" << '\n';
        printf("%d %d %d\n", a, b, c);
    }
}