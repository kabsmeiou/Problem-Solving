#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> mp;
        for (int i = 0; i < n; i += 1) {
            cin >> a[i];
            mp[a[i]] += 1;
        }
        if (mp[1] > 1) {
            cout << "NO" << '\n';
        } else if (mp[1] == 1) {
            cout << "YES" << '\n';
        } else {
            sort(a.begin(), a.end());
            if (a.size() >= 2 && a[0] != a[1]) {
                cout << "YES" << '\n';
                continue;
            }
            bool ok = false;
            for (int i = 1; i < n; i += 1) {
                if (a[i] % a[0] > 0) ok = true;
            }
            cout << (ok ? "YES" : "NO") << '\n';
        }
    }
}