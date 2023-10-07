#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        int ans = 0;
        while (n > 0) {
            n -= ++ans;
        }
        if (n == -1) ++ans;
        std::cout << ans << '\n';
    }
}