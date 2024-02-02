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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<pair<int, int>> c(n);
        for (int i = 0; i < n; i++) {
           c[i] = {a[i] + b[i], i}; 
        }
        sort(c.begin(), c.end());
        for (int i = 0; i < n; i++) {
            cout << a[c[i].second] << " \n"[i == n - 1];
        }
        for (int i = 0; i < n; i++) {
            cout << b[c[i].second] << " \n"[i == n - 1];
        }
    }
}