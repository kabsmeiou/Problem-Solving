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
        sort(a.begin(), a.end());
        for (int i = 0; i < n - 1; i += 1) {
            int cur = (a[i + 1] - a[i]) * (i + 1);
            if (k > cur) {
                k -= cur;
            } else {
                int have = a[i] + k / (i + 1);
                for (int j = 0; j <= i; j += 1) {
                    a[j] = have;
                }
                k %= (i + 1);
                for (int j = 0; j < k; j += 1) {
                    a[j] += 1;
                }
                k = 0;
                break;
            }
        }
        int ans = 0;
        if (k > 0) {
            cout << a[n - 1] * n + k << '\n';
            continue;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i += 1) {
            ans += min(a[0] + 1, a[i]);
        }
        cout << max(0LL, ans - (n - 1)) << '\n';
    }
}