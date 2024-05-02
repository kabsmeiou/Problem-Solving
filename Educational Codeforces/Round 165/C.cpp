#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int sum = accumulate(a.begin(), a.end(), 0LL);
        if (n == 1) {
            cout << sum << '\n';
            continue;
        }
        vector<int> val(n - 1);
        for (int i = 1; i < n; i += 1) {
            val[i - 1] = a[i - 1] - a[i]; 
        }
        vector<pair<int, int>> vp(n - 1);
        for (int i = 1; i < n; i += 1) {
            int cur = abs(a[i] - a[i - 1]);
            vp[i - 1] = {i - 1, cur};
        }
        // cout << "test: ";
        // for (auto c : val) {
        //     cout << c << ' ';
        // }
        cout << '\n';
        sort(vp.rbegin(), vp.rend(), [](auto &left, auto &right) {
            return left.second < right.second;
        });
        for (int i = 0; i < k; i += 1) {
            sum -= abs(val[vp[0].first]);
            // cout << vp[0].second << ' ';
            vp[0].second = 0;
            int index;
            if (val[vp[0].first] < 0) {
                index = vp[0].first + 1;
            } else {
                index = vp[0].first - 1;
            }
   
            // cout << val[vp[0].first] << ' ';
            // cout << index << '\n';
            if (index >= 0 && index < n - 1) {
                val[index] = val[vp[0].first] + val[index];
            }
            val[vp[0].first] = 0;
            sort(vp.rbegin(), vp.rend(), [](auto &left, auto &right) {
                return left.second < right.second;
            });
        }
        cout << sum << '\n';
    }
}