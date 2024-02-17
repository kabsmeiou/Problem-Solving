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
        string ans = "aaa";
        int cur = 3;
        for (int i = 1; i < 26; i += 1) {
            if (cur < n) {
                cur += 1;
                ans[2] = ++ans[2];
            }
        }
        if (cur < n) {
            for (int i = 1; i < 26; i += 1) {
                if (cur < n) {
                    cur += 1;
                    ans[1] = ++ans[1];
                }
            }
        }
        if (cur < n) {
            for (int i = 1; i < 26; i += 1) {
                if (cur < n) {
                    cur += 1;
                    ans[0] = ++ans[0];
                }
            }
        }
        cout << ans << '\n';
    }
}