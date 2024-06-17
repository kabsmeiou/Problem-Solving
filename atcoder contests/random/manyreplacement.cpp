#include <bits/stdc++.h>

signed main() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  int n, q;
  std::string s;
  std::cin >> n >> s >> q;
  std::vector<char> ans(26, 'a');
  std::iota(ans.begin(), ans.end(), 'a');
  for (int i = 0; i < q; i += 1) {
    char c, d;
    std::cin >> c >> d;
    for (int k = 0; k < 26; k += 1) {
      if (ans[k] == c) ans[k] = d;
    }
  }
  for (int i = 0; i < n; i += 1) {
    std::cout << ans[s[i] - 'a'];
  }
}