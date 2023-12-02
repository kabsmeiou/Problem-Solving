#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        int cur = 0, ans = 0, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '#') {
                ans += cnt;
                cnt = 0;
            } else {
                ++cnt;
                cur = max(cnt, cur);
            }
        }
        cout << (cur >= 3 ? 2 : ans + cnt) << '\n';
    }   
}