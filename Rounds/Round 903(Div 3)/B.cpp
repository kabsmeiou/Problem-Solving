#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        /*ll a, b, c;
        std::cin >> a >> b >> c;
        auto fun = [](ll x, ll g) {
            return (x / g - 1);
        };
        ll gcd = std::__gcd(a, std::__gcd(b, c));
        ll ans = fun(a, gcd) + fun(b, gcd) + fun(c, gcd);
        std::cout << (ans <= 3 ? "YES" : "NO") << '\n';
        */
        int a, b, c;
        std::cin >> a >> b >> c;
        int min = std::min({a, b, c});
        if ((a % min != 0) || (b % min != 0) || (c % min != 0)) {
            std::cout << "NO" << '\n';
            continue;
        }
        ll ans = (a / min - 1) + (b / min - 1) + (c / min - 1);
        std::cout << (ans <= 3 ? "YES" : "NO") << '\n';
    }
}