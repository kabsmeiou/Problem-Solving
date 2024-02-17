#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> ans(n);
        int p = 1;
        for (int i = 1; i <= k; i += 1) {
            vector<int> pos;
            for (int j = i - 1; j < n; j += k) {
                pos.push_back(j);
            }
            if (i % 2 == 0) {
                sort(pos.rbegin(), pos.rend());
            }
            for (auto cur : pos) {
                ans[cur] = p;
                p += 1;
            }
        }
        for (int i = 0; i < n; i += 1) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
}