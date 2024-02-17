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
        if (n == 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans, vis(n + 1, 0);
        for (int i = 0; i < n; i += 1) {
            for (int j = 1; j <= n; j += 1) {
                if (!vis[j] && j != a[i]) {
                    vis[j] = 1;
                    ans.push_back(j);
                    break;
                }
            }
        }
        if (!vis[n]) {
            int temp = ans.back();
            ans.pop_back();
            ans.push_back(n);
            ans.push_back(temp);
        }
        for (auto c : ans) {
            cout << c << ' ';
        }
        cout << '\n';
    }
}