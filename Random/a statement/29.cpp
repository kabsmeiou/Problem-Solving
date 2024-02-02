#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> city(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> city[i];
        }
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + city[i];
        }
        int ans = 1e16;
        for (int i = 0; i <= n; i++) {
            ans = min(ans, (a + b) * city[i] + b * (pref[n] - pref[i] - (n - i) * city[i]));
        }
        cout << ans << '\n';
    }
}