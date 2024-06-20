#include <bits/stdc++.h>
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  string s;
  cin >> s;
  int k = (int)s.size();
  auto ok = [&](string t, int x) {
    if (abs(x - k) > 1) return false;
    if (t == s) return true;
    int pref = 0, suf = 0;
    for (int i = 0; i < min(x, k) && s[i] == t[i]; i += 1) pref += 1;
    for (int i = 0; i < min(x, k) && s[k - i - 1] == t[x - i - 1]; i += 1) suf += 1;
    if (x > k) {
      return (pref + suf >= k);
    }
    return (pref + suf >= k - 1);
  };
  vector<int> ans;
  for (int i = 0; i < n; i += 1) {
    string t;
    cin >> t;
    int x = (int)t.size();
    if (ok(t, x)) ans.push_back(i + 1);
  }
  cout << ans.size() << '\n';
  for (auto c : ans) cout << c << ' ';
}