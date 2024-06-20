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
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 1; i < n; i += 1) {
      ans += (a[i] - a[i - 1]);
    }
    cout << ans << '\n';
  }
}