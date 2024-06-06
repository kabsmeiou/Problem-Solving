#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

signed main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &c : a) cin >> c;
    for (auto &c : b) cin >> c;
    vector<int> prefa(n + 1, 0), prefb(m + 1, 0);
    for (int i = 1; i <= n; i += 1) {
        prefa[i] = prefa[i - 1] + a[i - 1];
    } 
    for (int i = 1; i <= m; i += 1) {
        prefb[i] = prefb[i - 1] + b[i - 1];
    } 
    int x = lower_bound(prefa.begin(), prefa.end(), k) - prefa.begin() - 1;
    int y = lower_bound(prefb.begin(), prefb.end(), k) - prefb.begin() - 1;
    int ans = max(x, y);
    for (int i = 0; i <= n; i += 1) {
        if (prefa[i] <= k) {
            int x = upper_bound(prefb.begin(), prefb.end(), k - prefa[i]) - prefb.begin();
            ans = max(ans, i + x - 1);
        }
    }
    cout << ans << '\n';
} 