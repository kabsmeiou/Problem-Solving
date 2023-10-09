#include <bits/stdc++.h>
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        double px, py, ax, ay, bx, by;
        std::cin >> px >> py >> ax >> ay >> bx >> by;
        double a = sqrt(pow(px - ax, 2) + pow(py - ay, 2));
        double za = sqrt(pow(0 - ax, 2) + pow(0 - ay, 2));
        double b = sqrt(pow(px - bx, 2) + pow(py - by, 2));
        double zb = sqrt(pow(0 - bx, 2) + pow(0 - by, 2));
        double c = sqrt(pow(ax - bx, 2) + pow(ay - by, 2));
        double ans = std::min({
            std::max(a, za),
            std::max(b, zb),
            std::max({za, c / 2, b}),
            std::max({zb, c / 2, a})
        });
        std::cout << std::setprecision(15) << std::fixed;
        std::cout << ans << '\n';
    }
}