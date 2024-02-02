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
        string s;
        cin >> n >> s;
        int ans = 0, k = 100;
        vector<int> cnt(10, 0);
        for (int i = 0; i < n; i++) {
            int mx = 0, dst = 0;
            cnt.assign(10, 0);
            for (int j = 0; j + i < n && j < k; j++) {
                int cur = (int)(s[i + j] - '0');    
                if (!cnt[cur]) dst += 1;
                cnt[cur] += 1;
                mx = max(mx, cnt[cur]);
                if (mx <= dst) ans += 1;
            }
        }
        cout << ans << '\n';
    }
}