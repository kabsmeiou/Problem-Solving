#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = a[0] - 1;
        for (int i = 1; i < n; i++) {
            ans += max(0LL, a[i] - a[i - 1]);
        }
        cout << ans << '\n';
    }
}