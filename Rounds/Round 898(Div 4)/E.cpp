#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll mn = 1e9;
        for (auto &c : a) {
            cin >> c;
            mn = min(mn, c);
        }

        if (n == 1) {
            cout << x + a[0] << endl;
            continue;
        }

        ll ans = 0;
        ll left = 1, right = *max_element(a.begin(), a.end()) + x;
        while (left <= right) {
            ll h = (left + right) / 2;
            ll cur = 0;
            for (int i = 0; i < n; i++) {
                cur += max(0LL, h - a[i]);
            }

            if (cur > x) {
                ans = h;
                right = h - 1;
            } else {
                left = h + 1;
            }
        }
        cout << ans - 1 << endl;
    }
}