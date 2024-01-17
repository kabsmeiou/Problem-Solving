#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> ans(n);
        int cnt = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] <= cnt) ans[i] = 1;
            else if (cnt < q) cnt++, ans[i] = 1;
            else ans[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i];                                                                                                                                                          
        }
        cout << '\n';
    }
}