#include <bits/stdc++.h>
#define int long long

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int T;
  std::cin >> T;
  while (T--) {
    int n, k, q;
    std::cin >> n >> k >> q;
    std::vector<int> a(k + 1), b(k + 1);
    a[0] = b[0] = 0;
    for (int i = 1; i <= k; i += 1) {
      std::cin >> a[i];
    }
    for (int i = 1; i <= k; i += 1) {
      std::cin >> b[i];
    }
    while (q--) {
      int d;
      std::cin >> d;
      int ans;
      int pos = lower_bound(a.begin(), a.end(), d) - a.begin();
      if (!pos) {
        ans = 0;
      } else {    // speed = current point - lowerbound / (upperbound - lowerbound) / speed to upperbound
        ans = b[pos - 1] + (b[pos] - b[pos - 1]) * (d - a[pos - 1]) / (a[pos] - a[pos - 1]);
      }
      std::cout << ans << " \n"[!q];
    }
  }
}