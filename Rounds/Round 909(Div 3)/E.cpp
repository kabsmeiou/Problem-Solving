#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        if (is_sorted(a.begin(), a.end())) {
            cout << 0 << '\n';
            continue;
        }
        int ans = 0;
        bool ok = true;
        for (int l = 1, r = n; l <= r; l++) {
            
        }
        cout << (ok ? ans : -1) << '\n';
    }
}