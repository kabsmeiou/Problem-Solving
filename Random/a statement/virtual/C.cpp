#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, f, a, b;
        cin >> n >> f >> a >> b;
        vector<int> m(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            m[i] = x;
        }
        for (int i = 1; i <= n; i++) {
            f -= min(a * (m[i] - m[i - 1]), b);
            if (f < 0) break;
        }
        cout << (f > 0 ? "YES" : "NO") << '\n';
    }
}