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
    vector<map<pair<int, int>, int>> triplets(3);
    map<tuple<int, int, int>, int> cnt;
    for (int i = 0; i + 2 < n; i += 1) {
      cnt[{a[i], a[i + 1], a[i + 2]}] += 1;
      triplets[0][{a[i + 1], a[i + 2]}] += 1; // 0, a2, a3
      triplets[1][{a[i], a[i + 2]}] += 1; // a1, 0, a3
      triplets[2][{a[i], a[i + 1]}] += 1; // a1, a2, 0
    }
    int ans = 0;
    for (auto& trips : triplets) {
      for (auto& [_, c] : trips) {
        ans += c * (c - 1) / 2;   // unique pairs
      }
    }
    for (auto& [_, c] : cnt) {
      ans -= c * (c - 1) / 2 * 3;   // subtract similar pairs
    }
    cout << ans << '\n';
  }
}