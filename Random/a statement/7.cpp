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
        for (auto &c : a) cin >> c;
        vector<int> ans;
        int l = *min_element(a.begin(), a.end()), r = *max_element(a.begin(), a.end());
        while (l != r) {
            if (l & 1 && !(r & 1)) {
                r = (r + 1) / 2;
                l = (l + 1) / 2;
                ans.push_back(1);
            } else {
                r /= 2;
                l /= 2;
                ans.push_back(0);
            } 
        }
        cout << ans.size() << '\n';
        if (ans.size() <= n) {
            for (auto ret : ans) {
                cout << ret << ' ';
            }
            cout << '\n';
        }
    }
}