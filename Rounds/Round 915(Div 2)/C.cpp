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
        //what the hell is this problem??
        if (s[1] < s[0] && s[n - 2] < s[n - 1]) {
            cout << -1 << '\n';
            continue;
        }
        int ans = 0;
        for (int i = 1; i < n; i++) {
            if (s[i] < s[i - 1]) ans++;
        }
        cout << ans << '\n';
    }
}