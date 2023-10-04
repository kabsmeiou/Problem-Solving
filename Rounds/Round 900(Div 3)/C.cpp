#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        ll n, k, x;
        cin >> n >> k >> x;
        ll min_sum = (k * (k + 1)) / 2;
        ll max_sum = 0;
        for (int i = n - k + 1; i <= n; i++) {
            max_sum += i;
        }
        if (x < min_sum || x > max_sum) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
    }
}