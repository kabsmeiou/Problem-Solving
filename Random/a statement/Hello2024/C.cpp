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
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int ans = 0;
        int prev1 = 1e10 + 5, prev2 = 1e10 + 5;
        for (int i = 0; i < n; i++) {
            if (prev1 > prev2) {
                swap(prev1, prev2);
            }
            if (a[i] <= prev1) {
                prev1 = a[i];
            } else if (a[i] <= prev2) {
                prev2 = a[i];
            } else {
                prev1 = a[i];
                ans++;
            }
        }
        cout << ans << '\n';
    }
}