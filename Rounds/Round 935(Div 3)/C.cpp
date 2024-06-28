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
    string s;
    cin >> s;
    vector<int> pref(n + 1, 0);
    for (int i = 0; i < n; i += 1) {
      pref[i + 1] = pref[i] + (s[i] == '1');
    }
    int ans = -1;
    for (int i = 0; i <= n; i += 1) {
      int lft = i - pref[i];
      int rgt = pref[n] - pref[i];
      if (lft * 2 >= i && rgt * 2 >= n - i && (abs(n - 2 * i) < abs(n - 2 * ans) || ans == -1)) {
        ans = i;
      }
    }
    cout << ans << '\n';
  }
}