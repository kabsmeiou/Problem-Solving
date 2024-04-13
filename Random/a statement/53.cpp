#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int ans = 0, cur = 0;
        while (cur < n) {
            cur += (++ans);
        }
        if (cur == n + 1) ans++;
        cout << ans << '\n';
    }
}