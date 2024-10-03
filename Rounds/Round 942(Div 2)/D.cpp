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
    string s;
    cin >> n >> s;
    if (s.size() == 2) {
      cout << (s[0] == s[1] ? "RH" : "NO") << '\n';
      continue;
    }
    map<char, int> cnt{{'N', 0}, {'S', 0}, {'E', 0}, {'W', 0}};
    for (int i = 0; i < n; i += 1) {
      cnt[s[i]] += 1;
    }
    if (cnt['N'] + cnt['S'] & 1 || cnt['E'] + cnt['W'] & 1) {
      cout << "NO" << '\n';
    } else {
      string ans = "";
      int for_heli_w = cnt['W'] / 2, for_heli_e = cnt['E'] / 2;
      int for_heli_n = (cnt['N'] + 1) / 2, for_heli_s = (cnt['S'] + 1) / 2;
      for (char move : s) {
        if (move == 'N') {
          if (for_heli_n) {
            ans += "H";
            for_heli_n--;
          } else {
            ans += "R";
          }
        } else if (move == 'S') {
          if (for_heli_s) {
            ans += "H";
            for_heli_s--;
          } else {
            ans += "R";
          }
        } else if (move == 'W') {
          if (for_heli_w) {
            ans += "H";
            for_heli_w--;
          } else {
            ans += "R";
          }
        } else if (move == 'E') {
          if (for_heli_e) {
            ans += "H";
            for_heli_e--;
          } else {
            ans += "R";
          }
        }
      }
      cout << ans << '\n';
    }
  }
}