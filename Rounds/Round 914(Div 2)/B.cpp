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
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            vp[i] = {x, i};
        }
        sort(vp.begin(), vp.end());
        vector<int> pref(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) pref[i] = vp[i].first;
            else pref[i] = pref[i - 1] + vp[i].first;
        }
        vector<int> ans(n);
        vector<int> pos;
        for (int i = 1; i < n; i++) {
            if (vp[i].first > pref[i - 1]) {
                pos.push_back(i);
            }
        }
        for (int i = 0; i < n; i++) {
            auto it = upper_bound(pos.begin(), pos.end(), i);
            if (it == pos.end()) {
                ans[vp[i].second] = n - 1;
            } else {
                ans[vp[i].second] = max(*it - 1, 0LL);
            }
            
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
}