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
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        string s;
        cin >> s;
        vector<int> ans(n);
        if (m == 1) {
            for (int i = 0; i < n; i += 1) {
                cout << 0 << " \n"[i == n - 1];
            }
            continue;
        }
        int l = 0, r = n - 1;
        for (int i = 0; i < n - 1; i += 1) {
            if (s[i] == 'L') l += 1;
            else r -= 1;
        }
        int ind = s[n - 2] == 'L' ? l : r;
        int r_cur = 0, l_cur = 0;
        ans[n - 1] = a[ind] % m;
        int cur = a[ind];
        for (int i = n - 2; i >= 0; i -= 1) {
            if (s[i] == 'L') {
                l_cur += 1;
                cur = cur * a[ind - l_cur] % m;
            } else {
                r_cur += 1;
                cur = cur * a[ind + r_cur] % m;
            }
            ans[i] = cur % m;
        }
        for (int i = 0; i < n; i += 1) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }
}