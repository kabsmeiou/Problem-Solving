#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    string s;
    cin >> s;
    int n = (int)s.size();
    int used = 0;
    int ans = 1;
    for (int i = 1; i < n; i += 1) {
      ans += (s[i] != s[i - 1]);
      if (s[i - 1] < s[i]) {
        used = 1;
      }
    }
    cout << ans - used << '\n';
  }
}