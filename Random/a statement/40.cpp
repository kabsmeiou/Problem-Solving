#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, x;
        cin >> n >> x;
        if (n % x) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> p(n + 1);
        iota(p.begin(), p.end(), 0);
        p[1] = x, p[n] = 1;
        for (int i = x * 2; i <= n; i += x) {
            if (n % i == 0) {
                p[x] = i;
                x = i;
            }
        }
        for (int i = 1; i <= n; i++) {
            cout << p[i] << " \n"[i == n];
        }
    }
}