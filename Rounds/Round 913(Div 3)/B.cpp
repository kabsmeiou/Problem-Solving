#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        stack<char> key;
        string s;
        cin >> s;
        int n = s.size();
        int B = 0, b = 0;
        string ans = "";
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'b') {
                b++;
            } else if (s[i] == 'B') {
                B++;
            } else {
                if (isupper(s[i])) {
                    if (B == 0) ans += s[i];
                    else B--;
                } else if (islower(s[i])) {
                    if (b == 0) ans += s[i];
                    else b--;
                }
            }
        }
        for (int i = ans.size() - 1; i >= 0; i--) {
            cout << ans[i];
        }
        cout << '\n';
    }
}