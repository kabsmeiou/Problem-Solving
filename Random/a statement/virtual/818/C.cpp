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
        vector<int> a(n), b(n);
        for (auto &c : a) cin >> c;
        for (auto &c : b) cin >> c;
        int ok = 1;
        a.push_back(a[0]), b.push_back(b[0]);
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i] || b[i] > b[i + 1] + 1 && b[i] != a[i]) {
                ok = 0;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}