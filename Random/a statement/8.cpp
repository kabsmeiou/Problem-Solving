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
        if (s.find('_') == string::npos) {
            cout << (s.size() == 1 ? 1 : 0) << '\n';
            continue;
        }
        int ans = s[0] != '^';
        for (int i = 0; i + 1 < s.size(); i++) {
            if (s[i] == s[i + 1] && s[i] == '_') ans++;
        }
        cout << ans + (s[s.size() - 1] != '^') << '\n';
    }
} 