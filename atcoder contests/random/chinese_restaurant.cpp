#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &c : a) cin >> c;
  vector<int> moves(n, 0);
  for (int p = 0; p < n; p += 1) {
    for (int i = -1; i <= 1; i += 1) {
      moves[(a[p] - p + i + n) % n] += 1;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i += 1) ans = max(moves[i], ans);
  cout << ans;
}