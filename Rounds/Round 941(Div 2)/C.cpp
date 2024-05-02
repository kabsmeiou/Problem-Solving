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
        sort(a.begin(), a.end());
        a.resize(unique(a.begin(), a.end()) - a.begin());
        int k = a.size();
        if (k == 1) {
            cout << "Alice" << '\n';
            continue;
        }
        int ok = 0, lst = 0;
        for (int i = 0; i < k - 1; i += 1) {
            if (a[i] - lst > 1) break;
            lst = a[i];
            ok ^= 1;
        }
        cout << (!ok ? "Alice" : "Bob") << '\n';
    }
}