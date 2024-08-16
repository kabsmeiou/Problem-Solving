#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int m;
  cin >> m;
  vector<int> cnt(32, 0);
  for (int i = 0; i < m; i += 1) {
    int t, v;
    cin >> t >> v;
    if (t == 1) {
      cnt[v] += 1;
    } else if (t == 2) {
      for (int k = 30; k >= 0; k--) {
        int remove = min(v >> k, cnt[k]);
        v -= (remove << k);
      }
      cout << (v == 0 ? "YES" : "NO") << '\n';
    }
  }
}