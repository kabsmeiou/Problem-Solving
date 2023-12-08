#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s, l, r;
        int m;
        cin >> s >> m >> l >> r;
        int pos = -1;
        for (int i = 0; i < m; i++) {
            int cur = pos;
            for (char ch = l[i]; ch <= r[i]; ch++) {
                int k = s.size();
                for (int j = pos + 1; j < s.size(); j++) {
                    if (s[j] == ch) {
                        k = j;
                        break;
                    }
                }
                cur = max(cur, k);            
            }
            pos = cur;
        }
        cout << (pos == s.size() ? "YES" : "NO") << '\n';
    }
}