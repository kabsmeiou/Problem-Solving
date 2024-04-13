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
        sort (a.begin(), a.end());
        int k = (n + 1) / 2 - 1;
        int ans = 1;
        for (int i = k + 1; i < n; i += 1) {
            if (a[k] == a[i]) ans += 1;
            else break;
        }
        cout << ans << '\n';
    }
}