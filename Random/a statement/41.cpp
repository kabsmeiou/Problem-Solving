#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, bool> mp;
        for (auto &c : a) cin >> c, mp[c] = 1;
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        int cur = *max_element(a.begin(), a.end());
        int gcd = 0;
        for (int i = 0; i < n; i++) {
            gcd = __gcd(cur - a[i], gcd);
        }
        int add = cur - gcd;
        while (mp[add] == 1) {
            add -= gcd;
        }
        a.push_back(add);
        int ans = 0;
        for (int i = 0; i < n + 1; i++) {
            ans += (cur - a[i]) / gcd;
        }
        cout << ans << '\n';
    }
}