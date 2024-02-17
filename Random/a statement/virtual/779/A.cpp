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
        int ans = 0, cur = s[0] == '0';
        for (int i = 1; i < n; i += 1) {
            if (s[i] == s[i - 1] && s[i] == '0') {
                ans += 2;
            } else if (s[i] == '1' && s[i - 1] == '0' && s[i + 1] == '0' && i + 1 < n) {
                ans += 1;
            }
            if (s[i] == '0') cur += 1;
        }
        if (cur > n - cur + ans) {
            ans += n - cur + ans;
        }
        cout << ans << '\n';
    }
}