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
        vector<int> a(n), b(n);
        for (auto &c : a) cin >> c;
        for (auto &c : b) cin >> c;
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i += 1) {
            if (a[cur] > b[i]) {
                ans += 1;
            } else if (a[cur] <= b[i] && cur < n) {
                cur += 1;
            }
        }
        cout << ans << '\n';
    }
}