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
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        if (n % 2 == 0) {
            vector<int> ans;
            ans.push_back(n);
            ans.push_back(n - 1);
            for (int i = 3; i <= n; i += 1) {
                if (i & 1) {
                    ans.push_back((n + 1) - ans.back());
                } else {
                    ans.push_back((n - 1) - ans.back());
                }
            }
            for (int i = 0; i < n; i += 1) {
                cout << ans[i] << " \n"[i == n - 1];
            }
            continue;
        }
        cout << -1 << '\n';
    }
}