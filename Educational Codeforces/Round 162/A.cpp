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
        vector<int> s(n);
        for (auto &c : s) cin >> c;
        int l = 0, r = n - 1;
        for (int i = 0; i < n; i += 1) {
            if (s[i]) {
                l = i;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i -= 1) {
            if (s[i]) {
                r = i;
                break;
            }
        }
        int ans = 0;
        for (l; l < r; l += 1) {
            if (!s[l]) {
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
}