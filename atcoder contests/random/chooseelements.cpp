#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n);
  for (auto &c : a) cin >> c;
  for (auto &c : b) cin >> c;
  int dp[2][n];
  dp[0][0] = true, dp[1][0] = true;
  bool ok = true;
  for (int i = 1; i < n; i += 1) {
    dp[0][i] = ((dp[0][i - 1] && abs(a[i - 1] - a[i]) <= k) || (dp[1][i - 1] && abs(b[i - 1] - a[i]) <= k));
    dp[1][i] = ((dp[1][i - 1] && abs(b[i - 1] - b[i]) <= k) || (dp[0][i - 1] && abs(a[i - 1] - b[i]) <= k));
    if (!dp[0][i] && !dp[1][i]) {
      ok = false;
      break;
    }
  }
  cout << (ok ? "Yes" : "No");
}