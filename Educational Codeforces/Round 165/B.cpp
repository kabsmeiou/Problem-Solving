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
        int n = s.size();
        int ans = 0, k = 0;
        for (int i = 0; i < n; i += 1) {
            if (s[i] == '1') {
                k += 1;
            } else if (s[i] == '0') {
                ans += (!k ? 0 : k + 1);
            }
        }
        cout << ans << '\n';
    }
}