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
        vector<int> b(n - 1);
        int cur = 0;
        for (int i = 0; i < n - 1; i += 1) {
            b[i] = (a[i + 1] - a[i]);
        }
        for (int i = 0; i < n - 1; i += 1) {
            cur += (i & 1 ? 0 : b[i]);
        }
        cout << (n & 1 || cur >= 0 ? "YES" : "NO") << '\n';
    }
}