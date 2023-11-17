#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int l = 0, r = 1e9;
        for (int i = 1; i < n; i++) {
            if (a[i] > a[i - 1]) {
                r = min(r, (a[i] + a[i - 1]) >> 1);
            } else if (a[i] < a[i - 1]) {
                l = max(l, (a[i] + a[i - 1] + 1) >> 1);
            }
        }
        cout << (l <= r ? l : -1) << '\n';
    }
}