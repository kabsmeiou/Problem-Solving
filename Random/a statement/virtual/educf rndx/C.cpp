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
        int m;
        cin >> m;
        vector<int> pref(n), suf(n);
        for (int i = 0; i < n; i++) {
            if (i == 0) pref[i] = 0;
            else if (i == 1) pref[i] = 1;
            else {
                if (a[i - 1] - a[i - 2] > a[i] - a[i - 1]) {
                    pref[i] = pref[i - 1] + 1;
                } else {
                    pref[i] = pref[i - 1] + (a[i] - a[i - 1]);
                }
            }
        }
        for (int i = n - 1; i >= 0; i--) {
            if (i == n - 1) {
                suf[i] = 0;
            } else if (i == n - 2) {
                suf[i] = 1;
            } else {
                if (a[i + 2] - a[i + 1] > a[i + 1] - a[i]) {
                    suf[i] = suf[i + 1] + 1;
                } else {
                    suf[i] = suf[i + 1] + (a[i + 1] - a[i]); 
                }
            }
        }
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            if (x > y) {
                cout << suf[y - 1] - suf[x - 1] << '\n';
            } else {
                cout << pref[y - 1] - pref[x - 1] << '\n';
            }
        }
    }
}