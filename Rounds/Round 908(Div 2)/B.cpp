#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int, int> mp;
        int mx = 0;
        set<int> st;
        for (auto &c : a) {
            cin >> c;
            ++mp[c];
            if (mp[c] >= 2) st.insert(c);
        }
        if (st.size() <= 1) {
            cout << -1 << '\n';
            continue;
        }
        vector<int> ans(n, 1);
        set<int>::iterator cur = st.begin();
        int pos = 1, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == *cur) {
                ans[i] = pos;
                pos++, cnt++;
                if (cnt == 2) break;
                continue;
            }
        }
        set<int>::iterator cur2 = st.begin();
        cur2++;
        pos = 2, cnt = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == *cur2) {
                ans[i] = pos;
                pos++, cnt++;
                if (cnt >= 2) ans[i] = 3;
            }
        }
        for (auto c : ans) cout << c << ' ';
        cout << '\n';
    }
}