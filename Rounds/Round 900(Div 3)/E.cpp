#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n, q;
        cin >> n;
        vector<int> a(n + 1);
        int mxn = -1e9;
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            mxn = max(mxn, a[i]);
        }
        cin >> q;
        vector<int> ans(q + 1);
        for (int i = 1; i <= q; i++) {
            int l, k;
            cin >> l >> k;
            if (k > mxn) {
                a[i] = -1;
                continue;
            }
            int cur = a[l], mx = l;
            bool flag = false;
            int r = l;
            for (r; r <= n; r++) {
                cur &= a[r];
                if (r >= mx && cur >= k) {
                    flag = true;
                    mx = r;
                    ans[i] = mx;
                }
            }
            if (r - 1 >= mx && cur >= k) {
                flag = true;
                mx = r - 1;
                ans[i] = mx;
            }
            if (!flag) ans[i] = -1;
        }
    
        for (int i = 1; i <= q; i++) {
            cout << ans[i] << " \n"[i == q]; 
        }
    }
}