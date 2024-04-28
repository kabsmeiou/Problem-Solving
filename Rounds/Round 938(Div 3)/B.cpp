#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, c, d;
        cin >> n >> c >> d;
        vector<int> a(n * n);
        for (auto &c : a) cin >> c;
        sort(a.begin(), a.end());
        vector<int> b(n * n);
        int last = a[0];
        for (int i = 0; i < n * n; i += 1) {
            if (i == 0) {
                b[i] = last;
                continue;
            }
            if (i % n == 0) {
                b[i] = last + c;
                last = b[i];
            } else {
                b[i] = b[i - 1] + d;
            }
        }
        sort(b.begin(), b.end());
        bool ok = 1;
        for (int i = 0; i < n * n; i += 1) {
            if (a[i] != b[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}