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
        int ans = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
        vector<int> pref(n + 1, 0);
        for (int i = 1; i <= n; i += 1) {
            pref[i] = pref[i - 1] + a[i - 1];
        }
        for (int i = 2; i <= n / 2; i += 1) {
            if (n % i == 0) {
                int cmax = pref[i], cmin = pref[i];
                for (int j = i; j <= n; j += i) {
                    cmax = max(cmax, pref[j] - pref[j - i]);
                    cmin = min(cmin, pref[j] - pref[j - i]);
                }
                ans = max(ans, cmax - cmin);
            }
        }
        cout << ans << '\n';
    }
}