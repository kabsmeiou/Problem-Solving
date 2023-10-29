#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        string s, t;
        cin >> s >> t;
        bool ok = true, noneed = true;
        for (int i = 1; i < n; i++) {
            if (s[i - 1] == s[i]) {
                noneed = false;
                break;
            }
        }
        if (noneed) {
            cout << "YES" << '\n';
            continue;
        }
        for (int i = 1; i < m; i++) {
            if (t[i - 1] == t[i] || t[0] != t[m - 1]) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << "NO" << '\n';
            continue;
        }
        bool is_one = (t[0] == '1');
        for (int i = 1; i < n; i++) {
           if (s[i - 1] == s[i]) {
                if ((s[i] == '0' && !is_one) || (s[i] == '1' && is_one)) {
                    ok = false;
                    break;
                }
           }
        }
        if (!ok) {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
    }
}