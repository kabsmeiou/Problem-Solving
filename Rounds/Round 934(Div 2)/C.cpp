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
        map<int, int> mp;
        for (int i = 0; i < n; i += 1) {
            cin >> a[i];
            mp[a[i]] += 1;
        }
        int ans = -1, have = 1e5 * 2 + 1;
        int l = -1, r = -1;
        for (int i = 0; i <= n; i += 1) {
            if (mp[i] == 1) {
                if (l == -1) l = i;
                else r = i;
                if (l != -1 && r != -1) break;
            }
            if (mp[i] == 0) {
                ans = i;
                break;
            }
        }
        if (ans == -1) ans = n + 1;
        if (r != -1) ans = min(ans, r);
        cout << ans << '\n';
    }
}