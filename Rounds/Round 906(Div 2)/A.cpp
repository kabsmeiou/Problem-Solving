#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        bool ok = false;
        vector<int> a(n);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            ++mp[a[i]];
        }
        if (mp.size() == 1) {
            cout << "YES" << '\n';
            continue;
        }
        if (mp.size() == 2) {
            sort(a.begin(), a.end());
            int x = mp[a[0]], y = 0;
            int prev = a[0];
            for (int i = 1; i < n; i++) {
                if (a[i] != prev) {
                    y = mp[a[i]];
                }
            }
            int cur = abs(x - y);
            if (cur == 1 && n % 2 == 1) {
                cout << "YES" << '\n';
                continue;
            }
            if (x == y) {
                cout << "YES" << '\n';
                continue;
            }
        }
        cout << "NO" << '\n';
    }
}