#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int l, r;
        cin >> l >> r;
        pair<int, int> ans{-1, -1};
        for (int i = l; i <= min(l + 100, r); i++) {
            string s = to_string(i);
            sort(s.begin(), s.end());
            int cur = (s[s.size() - 1] - '0') - (s[0] - '0');
            if (cur > ans.first) {
                ans.first = cur;
                ans.second = i;
            }
        }
        cout << (ans.second == 0 ? ans.first : ans.second) << '\n';
    }
} 