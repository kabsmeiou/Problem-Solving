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
        string a, b, c;
        cin >> n >> a >> b >> c;
        bool ok = false;
        for (int i = 0; i < n; i++) {
            if (a[i] != c[i] && b[i] != c[i]) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}