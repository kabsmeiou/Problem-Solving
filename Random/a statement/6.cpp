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
        int ans = 0, cur = 0;
        if (n == 1) {
            cout << a[0] - 1 << '\n';
            continue;
        }
        if (n == 2) {
            if (a[0] > a[1]) {
                cout << a[0] - 1 << '\n';
            } else {
                cout << a[1] - 1 << '\n';   
            }
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > cur) {
                ans += a[i] - cur;
            }
            cur = a[i];
        }
        cout << ans - 1 << '\n';
    }
}