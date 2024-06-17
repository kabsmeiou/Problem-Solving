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
    map<int, int> cards;
    int ans = 0;
    for (int i = 0; i < n; i += 1) {
      ans += (++cards[a[i]] == 2);
    }
    cout << ans << '\n';
  }
}