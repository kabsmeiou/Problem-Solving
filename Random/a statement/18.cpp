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
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (i == j) continue;
                if (a[i] | a[j] < a[i] + a[j]) {
                    a[i] = a[i] | a[j];
                    a[j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            ans += a[i];
        }
        cout << ans << '\n';
    }
}