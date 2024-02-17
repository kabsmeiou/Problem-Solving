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
        vector<int> cur(26, 0);
        string ans = "";
        for (int j = 0; j < n; j += 1) {
            for (int i = 0; i < 26; i += 1) {
                if (a[j] == cur[i]) {
                    ans += i + 'a';
                    cur[i] += 1;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
}