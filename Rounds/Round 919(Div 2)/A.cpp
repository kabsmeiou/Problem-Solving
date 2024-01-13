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
        int l = 0, r = 1e9;
        set<int> invalid;
        for (int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;
            if (a == 1) {
                l = max(l, x);
            } else if (a == 2) {
                r = min(r, x);
            } else if (a == 3) {
                invalid.insert(x);
            }
        }
        int ans = r - l + 1;
        for (auto c : invalid) {
            if (c >= l && c <= r) {
                ans--;
            }
        }
        cout << max(ans, 0LL) << '\n';
    }
}