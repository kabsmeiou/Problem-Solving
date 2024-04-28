#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m, k, d;
        cin >> n >> m >> k >> d;
        vector<int> bridge(m), ans(n, 1e5 * 2 + 1);
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                cin >> bridge[j];
            }
            for (int j = 0; j <= d; j += 1) {
                int cur = 2;
                int option = 1e9, ind = -1;
                for (int x = m - 2; x >= m - 2 - d; x -= 1) {
                    if (bridge[x] < option) {
                        ind = x;
                        option = bridge[x];
                    }
                }
                for (int y = j + 1; y < m - 1; y += d + 1) {
                    if (y > ind && bridge[y] + 1 > option) {
                        cur += option + 1;
                        break;
                    }
                    cur += (bridge[y] + 1);
                }
                //cout << cur << '\n';
                ans[i] = min(cur, ans[i]);
            }
            //cout << '\n';
        }
        int ret = 0, sum = 0;
        for (int i = 0; i < k; i += 1) {
            sum += ans[i];
        }
        ret = sum;
        for (int i = k; i < n; i += 1) {
            sum -= ans[i - k];
            sum += ans[i];
            ret = min(ret, sum);
        }
        cout << ret << '\n';
    }
}