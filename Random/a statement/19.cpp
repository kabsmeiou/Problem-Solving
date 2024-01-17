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
        int ans = 0;
        if (n <= 2) {
            cout << 0 << '\n';
            for (auto x : a) {
                cout << x << ' ';
            }
            cout << '\n';
            continue;
        }
        a.push_back(0);
        for (int i = 1; i + 1 < n; i++) {
            if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
                a[i + 1] = max(a[i], a[i + 2]);
                ans++;
            }
        }
        a.pop_back();
        cout << ans << '\n';
        for (int i = 0; i < n; i++) {
            cout << a[i] << " \n"[i == n - 1];
        }
    }
}