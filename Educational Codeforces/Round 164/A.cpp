#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, int> a;
        for (int i = 1; i <= n; i += 1) {
            a[i % m] += 1;
        }
        int mx = -1;
        for (auto c : a) {
            mx = max(c.second, mx);
        }
        int have = n - mx;
        cout << (k >= have ? "NO" : "YES") << '\n';
    }
}