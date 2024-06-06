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
        string s;
        cin >> s;
        int ans = 0;
        vector<int> used(n + 1);
        for (int i = 0; i < n; i += 1) {
            if (s[i] == '0') {
                int k = i + 1;
                for (int j = i; j < n; j += k) {
                    if (s[j] == '1') break;
                    if (!used[j + 1]) {
                        used[j + 1] = 1;
                        ans += k;
                    }
                }
            }
        }
        cout << ans << '\n';
    }
}