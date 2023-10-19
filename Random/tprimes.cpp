#include <bits/stdc++.h>
#define ll long long
const int N = 1e6 + 1;
int spf[N];
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::fill(spf, spf + N, 1);
    spf[0] = 0, spf[1] = 0;
    for (int i = 2; i < N; i++) { //sieve
        if (spf[i]) {
            for (int j = i << 1; j < N; j += i) {
                spf[j] = 0;
            }
        }
    }
    int n;
    std::cin >> n;
    while (n--) {
        ll x;
        std::cin >> x;
        std::cout << ((ll)sqrt((double)x) * (ll)sqrt((double)x) == x && spf[(int)sqrt((double)x)] ? "YES" : "NO") << '\n';
    }
}