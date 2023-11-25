#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int min = *min_element(a.begin(), a.end());
        int max = *max_element(a.begin(), a.end());
        int ans = 0;
        vector<int> ret;
        while (min != max) {
            ans++;
            if (max & 1) {
                ret.push_back(0);
                min = min / 2;
                max = max / 2;
            } else {
                ret.push_back(1);
                min = (min + 1) / 2;
                max = (max + 1) / 2;
            }
            /*ret.push_back(min);
            ans++;
            max = (min + max) >> 1;*/
        }
        cout << ans << '\n';
        if (ans <= n) {
            for (auto c : ret) {
                cout << c << ' ';
            }
            cout << '\n';
        }
    }
}