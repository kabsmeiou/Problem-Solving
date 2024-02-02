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
        int ok = 0, odd = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                ok = i + 1;
                break;
            } else {
                odd += 1;
                ans.push_back(i + 1);
            }
        }
        if (ok != 0) {
            cout << 1 << '\n';
            cout << ok << '\n';
        } else if (odd >= 2) {
            cout << 2 << '\n';
            cout << ans[0] << ' ' << ans[1] << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
}