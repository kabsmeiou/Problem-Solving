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
        map<int, int> mp;
        int ans = 0, cur = 0, have = 0;
        for (int i = 0; i < n; i++) {
            mp[cur]++;
            have = max(have, mp[cur]);
            if (!a[i]) {
                ans += have;
                mp.clear();
                have = 0;
            }
            cur += a[i];
        }
        cout << ans + mp[0] << '\n';
    }
}