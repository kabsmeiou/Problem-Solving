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
        vector<int> a(n - 1);
        for (auto &c : a) cin >> c;
        vector<int> ans(n);
        ans[n - 1] = 1e9;
        for (int i = n - 2; i >= 0; i -= 1) {
            ans[i] = ans[i + 1] - a[i];
        }
        // for (int i = 1; i < n; i += 1) {
        //     cout << ans[i] % ans[i - 1] << ' ';
        // }
        for (int i = 0; i < n; i += 1) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
}