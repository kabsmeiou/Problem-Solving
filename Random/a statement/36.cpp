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
        int ans = 0, cur = 0, have = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                cur += 1;
            } else {
                have += cur;
                cur = 0;    
            }
            ans = max(cur + (have ? have / 2 + 1 : 0), ans);
        }
        cout << ans << '\n';
    }
}