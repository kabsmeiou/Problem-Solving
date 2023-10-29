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
        if (n & 1) {
            cout << -1 << '\n';
            continue;
        }
        int cur1 = 0, cur2 = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') cur1++;
            else cur2++;
        }
        if (cur1 != cur2) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans;
        for (int i = 0, j = n - 1; i < j;) {
            if (s[i] != s[j]) i++, j--;
            else if (s[i] == '0') {
                s.insert(j + 1, "01");
                i++, j++;
                ans.push_back(j);
            } else {
                s.insert(i, "01");
                ans.push_back(i);
                i++, j++;
            }
        }
        if (ans.size() > 300) {
            cout << -1 << '\n';
            continue;
        } else {
            cout << ans.size() << '\n';
        }
        for (auto c : ans) {
            cout << c << ' ';
        }
        cout << '\n';
    }
}