#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        map<int, int> mp;
        for (int i = 0; i < n; i += 1) {
            mp[a[i]] += 1;
        }
        int have = 0;
        for (auto x : mp) {
            if (x.second >= k) {
                have += 1;
            }
        }
        if (!have) {
            cout << n << '\n';
        } else {
            cout << k - 1 << '\n';
        }
    }
}