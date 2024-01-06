#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> pref(n, 0);
        pref[0] = a[0];
        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + a[i]; 
        }
        vector<int> prefmax(n, 0);
        prefmax[0] = b[0];
        for (int i = 1; i < n; i++) {
            prefmax[i] = max(prefmax[i - 1], b[i]); 
        }
        int ans = 0;
        for (int i = 0; i < min(k, n); i++) {
            ans = max({pref[i], pref[i] + (prefmax[i] * (k - i - 1)), ans});
        }
        cout << ans << '\n';
    }
}