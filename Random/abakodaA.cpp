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
        set<char> cur;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            auto k = cur.insert(s[i]);
            if (k.second) {
                if (cur.size() >= 3) {
                    ok = true;
                    break;
                }
            } else {
                cur.clear();
                cur.insert(s[i]);
            }
        }
        cout << (ok ? 0 : 3 - cur.size()) << '\n';
    }
}