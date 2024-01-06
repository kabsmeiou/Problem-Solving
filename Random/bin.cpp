#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> ans;
        while (__builtin_popcount(n) > 1) {
            ans.push_back(n);
            n -= n & -n;
        }
        while (n >= 1) {
            ans.push_back(n);
            n >>= 1;
        }
        cout << ans.size() << '\n';
        for (auto c : ans) {
            cout << c << ' ';
        } 
        cout << '\n';
    }
}