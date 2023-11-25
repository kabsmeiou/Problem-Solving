#include <bits/stdc++.h>
#define int long long
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
        map<int, int> cnt;
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (++cnt[a[i]] >= 2) {
                cur -= ((cnt[a[i]] - 1) * (cnt[a[i]] - 2)) >> 1;
            }
            cur += (cnt[a[i]] * (cnt[a[i]] - 1)) >> 1;
        }
        int ans = (((cnt[1] + cnt[2]) * (cnt[1] + cnt[2] - 1)) >> 1) - (((cnt[1] * (cnt[1] - 1)) >> 1) + ((cnt[2] * (cnt[2] - 1)) >> 1));
        cout << ans + cur << '\n';
    }
}