#include <bits/stdc++.h>
#define ll long long
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        ll n, k;
        std::cin >> n >> k;
        int gcd = std::__gcd(2LL, k);
        std::cout << (n % gcd ? "NO" : "YES") << '\n';
        /*if(n % 2 == 1 && k % 2 == 0) {
            std::cout << "NO" << '\n';
            continue;
        }
        std::cout << "YES" << '\n';*/
    }
}