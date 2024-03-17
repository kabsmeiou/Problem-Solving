#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, x;
        cin >> n >> m >> x;
        int sum = 0;
        vector<int> dp(n, 0);
        dp[x] = true;
        for (int i = 0; i < m; i += 1) {
            int a;
            char b;
            cin >> a >> b;
            vector<int> cur(n, 0);
            for (int j = 0; j < n; j += 1) {
                if (dp[j]) {
                    if (b == '0' || b == '?') {
                        cur[(j + a) % n] = 1;
                    }
                    if (b == '1' || b == '?') {
                        cur[(j + n - a) % n] = 1;
                    }
                }
            }
            dp = cur;
        }
        
    }
}