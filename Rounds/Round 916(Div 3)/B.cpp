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
        vector<int> ans(n);
        if (k == 0) {
            for (int i = n; i > 0; i--) {
                cout << i << " \n"[i == 1];
            }
            continue;
        } else if (k == n - 1) {
            for (int i = 1; i <= n; i++) {
                cout << i << " \n"[i == n];
            }
            continue;
        }
        int cur = 0;
        int p = 1, x = 2;
        ans[0] = 1;
        while (cur < k - 1) {
            ans[p] = x;
            x++, p++, cur++;
        }
        int r = n;
        while (p < n) {
            ans[p] = r;
            r--;
            p++;
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n - 1];
        }
    }   
}