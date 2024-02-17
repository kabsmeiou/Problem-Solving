#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        string a, b;
        cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int a_cnt = 0, b_cnt = 0;
        string ans = "";
        for (int i = 0, j = 0; i < n && j < m;) {
            if (a[i] < b[j]) {
                if (i == n) {
                    break;
                }
                if (a_cnt == k) {
                    ans += b[j];
                    j += 1;
                    a_cnt = 0;
                    b_cnt = 1;
                    continue;
                } 
                ans += a[i];
                i += 1;
                a_cnt += 1;
                b_cnt = 0;
            } else {
                if (j == m) {
                    break;
                }
                if (b_cnt == k) {
                    ans += a[i];
                    i += 1;
                    b_cnt = 0;
                    a_cnt = 1;
                    continue;
                }
                ans += b[j];
                j += 1;
                b_cnt += 1;
                a_cnt = 0;
            }
        }
        cout << ans << '\n';
    }
}