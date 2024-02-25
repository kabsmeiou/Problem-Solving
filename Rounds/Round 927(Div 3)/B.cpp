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
        for (auto &c : a) cin >> c;
        int ans = a[0];
        for (int i = 1; i < n; i += 1) {
            if (ans < a[i]) {
                ans = a[i];
            } else {
                ans = (a[i] + ans) / a[i] * a[i];
            }
        }
        cout << ans << '\n';
    }
}