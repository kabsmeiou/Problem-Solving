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
        string s;
        cin >> n >> s;
        reverse(s.begin(), s.end());
        vector<int> ans(n);
        int cur = 0;
        for (int i = n - 1; i >= 0; i -= 1) {
            cur += (s[i] - '0');
            ans[i] = cur;
        }
        int c = 0;
        for (int i = 0; i < n; i += 1) {
            ans[i] += c;
            c = (ans[i] / 10);
            ans[i] %= 10;
        }
        while (c > 0) {
            ans.push_back(c % 10);
            c /= 10;
        }
        while (ans.size() > 1 && !ans.back()) {
            ans.pop_back();
        }
        for (int i = ans.size() - 1; i >= 0; i -= 1) {
            cout << ans[i];
        }
        cout << '\n';
    }
}