#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        bool ok = false;
        for (int i = 0; i + 1 < s.size(); i++) {
            if (i + 1 == s.size() / 2 || i == s.size() / 2) continue;
            if (s[i] != s[i + 1]) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}