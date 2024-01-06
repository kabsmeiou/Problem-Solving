#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n * m);
        for (int i = 0; i < (n * m); i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (n > m) swap(n, m);
        int mx = max(a[n * m - 1] - a[1], a[n * m - 2] - a[0]);
        int ret = a[n * m - 1] - a[0];
        int ans = ret * (n * m - n) + mx * (n - 1);
        cout << ans << '\n';
    }
}