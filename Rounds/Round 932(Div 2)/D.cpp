#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n, c;
    cin >> n >> c;
    vector<int> s(n);
    for (auto &c : s) cin >> c;
    int ans = (c + 1) * (c + 2) / 2;
    int odd = 0, even = 0;
    for (int i = 0; i < n; i += 1) {
      ans -= s[i] / 2 + 1;
      ans -= c - s[i] + 1;
      odd += (s[i] % 2);
      even += (!(s[i] % 2));
    }
    ans += odd * (odd + 1) / 2 + even * (even + 1) / 2;
    cout << ans << '\n';
  }
}