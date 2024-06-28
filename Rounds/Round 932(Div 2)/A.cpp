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
    int n;
    cin >> n >> s;
    int rev = false;
    for (int i = 0; i < s.size() / 2; i += 1) {
      if (s[i] != s[s.size() - i - 1]) {
        if (s[i] > s[s.size() - i - 1]) {
          rev = true;
        }
        break;
      }
    }
    if (rev) {
      string cur = s;
      reverse(cur.begin(), cur.end());
      s = cur + s;
    }
    cout << s << '\n';
  }
}