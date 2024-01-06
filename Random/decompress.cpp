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
        for (auto &c : a) {
            cin >> c;
            c--;
        }
        vector<int> cnt(n);
        vector<vector<int>> loc(n);
        for (int i = 0; i < n; i++) {
            cnt[a[i]]++;
            loc[a[i]].push_back(i);
        }
        vector<int> twos;
        vector<int> zeroes;
        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (cnt[i] == 0) {
                zeroes.push_back(i);
            } else if (cnt[i] == 2) {
                twos.push_back(i);
            } else if (cnt[i] > 2) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << "NO" << '\n';
            continue;
        }
        auto p = a;
        auto q = a;
        int sz = (int)twos.size();
        for (int i = 0; i < sz; i++) {
            if (twos[i] < zeroes[i]) {
                ok = false;
                break;
            }
            int pos = twos[i];
            p[loc[pos][0]] = zeroes[i];
            p[loc[pos][1]] = zeroes[i];
        }
        if (ok) {
            cout << "YES" << '\n';
            for (int i = 0; i < n; i++) {
                cout << p[i] + 1 << " \n"[i == n - 1];
            }
            for (int i = 0; i < n; i++) {
                cout << q[i] + 1 << " \n"[i == n - 1];
            }
        } else {
            cout << "NO" << '\n';
        }
    }
}