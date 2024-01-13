#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = accumulate(a.begin(), a.end(), 0LL);
        vector<int> b = a;
        for (int i = 0;; i = (i + 1) % n) {
            if (b[i] % x != 0) break;
            ans += a[i];
            b[i] /= x;
        }
        cout << ans << '\n';
    }
} 