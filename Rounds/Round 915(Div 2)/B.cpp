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
        vector<pair<int, int>> vp(n - 1);
        map<int, int> mp;
        for (int i = 0; i < n - 1; i++) {
            int fi, se;
            cin >> fi >> se;
            vp[i] = {fi, se};
            mp[fi]++, mp[se]++;
        }
        int leaves = 0;
        for (int i = 0; i < n - 1; i++) {
            if (mp[vp[i].second] <= 1 || mp[vp[i].first] <= 1) {
                leaves++;
            }
        }
        cout << leaves / 2 + (leaves % 2)<< '\n';
    }
}