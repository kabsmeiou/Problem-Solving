#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, a, b;
        cin >> n >> a >> b;
        if (a + b + 2 > n || abs(a - b) > 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> p(n);
        if (a > b) {
            int l = 1, r = n;
            for (int i = 1; i <= a + b + 1; i++) {
                if (i % 2 == 1) {
                    p[i - 1] = l++;
                } else {
                    p[i - 1] = r--;
                }
            }
            for (int i = a + b + 2; i <= n; i++) {
                p[i - 1] = r--;
            }
        } else if (a == b) {
            int l = 1, r = n;
            for (int i = 1; i <= a + b + 1; i++) {
                if (i % 2 == 1) {
                    p[i - 1] = l++;
                } else {
                    p[i - 1] = r--;
                }
            }
            for (int i = a + b + 2; i <= n; i++) {
                p[i - 1] = l++;
            }
        } else {
            int l = 1, r = n;
            for (int i = 1; i <= a + b + 1; i++) {
                if (i % 2 == 1) {
                    p[i - 1] = r--;
                } else {
                    p[i - 1] = l++;
                }
            }
            for (int i = a + b + 2; i <= n; i++) {
                p[i - 1] = l++;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << p[i] << " \n"[i == n - 1];
        }
    }
}