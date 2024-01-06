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
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        int ans = 1, cur = 0;
        for (int i = 0; i < n - 1; i++) {
            cur += a[i], sum -= a[i];
            ans = max(ans, __gcd(sum, cur));
        }
        cout << ans << '\n';
    }
}