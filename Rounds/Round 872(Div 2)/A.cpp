#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        string temp = s;
        reverse(temp.begin(), temp.end());
        if (s != temp) {
            cout << s.size() << '\n';
        } else if (s == temp) {
            bool ok = false;
            char prev = s[0];
            for (int i = 1; i < s.size(); i++) {
                if (s[i] != prev) {
                    ok = true;
                    break;
                }
            }
            if (!ok) {
                cout << -1 << '\n';
            } else {
                cout << s.size() - 1 << '\n';
            }
        }
    }
}