#include <bits/stdc++.h>
#define int long long
using namespace std; 
const int MOD = 1e9 + 7;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int maximum = LLONG_MIN, sum = 0;
        for (int i = 0; i < n; i += 1) {
            sum = max(a[i], sum + a[i]);
            maximum = max(sum, maximum);
        }
        maximum = max(maximum, 0LL);
        int total = accumulate(a.begin(), a.end(), 0LL) % MOD;
        int ans = (maximum + MOD) % MOD;
        for (int i = 0; i < k; i += 1) {
            total = (total + ans) % MOD;
            ans = (ans << 1) % MOD;
        }
        cout << (total + MOD) % MOD << '\n';
    }
}