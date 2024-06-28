#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(n), dp(n);
    for (auto &c : a) cin >> c;
    for (auto &c : b) cin >> c;
    dp[n - 1] = a[n - 1];
    for (int i = n - 2; i > 0; i -= 1) {
      dp[i] = min(dp[i + 1] + a[i], dp[i + 1] + a[i] - a[i + 1] + b[i + 1]);
    }
    if (n > 1) dp[0] = min(dp[1] + a[0], dp[1] + a[0] - a[1] + b[1]);
    int ans = 1e18;
    for (int i = 0; i < m; i += 1) {
      ans = min(ans, dp[i]);
    }
    cout << ans << '\n';
  }
}