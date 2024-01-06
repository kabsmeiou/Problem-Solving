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
        int ans = 1;
        vector<int> dp(30, 0);
        for (int i = 0; i <= 9; i++) {
            for (int j = 0; j <= 9; j++) {
                for (int k = 0; k <= 9; k++) {
                    dp[i + j + k]++;
                }
            }
        }
        for (int i = 0; i < s.size(); i++) {
            ans *= dp[s[i] - '0'];
        }
        cout << ans << '\n';
    }
}