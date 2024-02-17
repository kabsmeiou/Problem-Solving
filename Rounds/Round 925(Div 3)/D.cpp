#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        map<int, map<int, int>> xy;
        for (int i = 0; i < n; i += 1) {
            xy[a[i] % x][a[i] % y] += 1;
        }
        int ans = 0;
        for (int i = 0; i < n; i += 1) {
            int need = (x - (a[i] % x)) % x;
            ans += xy[need][a[i] % y];
            if (a[i] % x == need) ans -= 1; 
        }
        cout << ans / 2 << '\n';
    }
}