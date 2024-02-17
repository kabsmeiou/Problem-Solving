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
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        int ans = 1;
        for (int i = 0; i < a.size(); i += 1) {
            ans = max(ans, (int)(lower_bound(a.begin(), a.end(), a[i] + n) - a.begin() - i));
        }
        cout << ans << '\n';
    }
}