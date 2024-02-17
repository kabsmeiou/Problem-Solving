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
        for (int i = 0; i < n; i += 1) {
            cin >> a[i];
        }
        int cur = a[0];
        int l = 0, r = n - 1;
        for (int i = 1; i < n; i += 1) {
            if (a[i] == cur) {
                l += 1;
            } else {
                break;
            }
        }
        for (int i = n - 1; i >= l; i--) {
            if (a[i] == cur) {
                r -= 1;
            } else {
                break;
            }
        }
        cur = a[n - 1];
        int ll = 0, rr = n - 1;
        for (int i = 0; i < n; i += 1) {
            if (a[i] == cur) {
                ll += 1;
            } else {
                break;
            }
        }
        for (int i = n - 2; i >= ll; i--) {
            if (a[i] == cur) {
                rr -= 1;
            } else {
                break;
            }
        }
        cout << max(0LL, min(r - l, rr - ll)) << '\n';
    }
}