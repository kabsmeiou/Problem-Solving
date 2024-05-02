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
        bool ok = false;
        for (int i = 0; i < n; i += 1) {
            if (a[a[i] - 1] == i + 1) {
                ok = true;
                break;
            }
        }
        cout << (ok ? 2 : 3) << '\n';
    }
}