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
    string temp = s;
    sort(temp.begin(), temp.end());
    string r = "";
    int index[27];
    for (int i = 0; i < n; i += 1) {
      if (r == "" || r.back() != temp[i]) {
        r += temp[i];
      }
    }
    for (int i = 0; i < r.size(); i += 1) {
      index[r[i] - 'a'] = r.size() - i - 1;
    }
    string ans = "";
    for (int i = 0; i < n; i += 1) {
      ans += r[index[s[i] - 'a']];
    }
    cout << ans << '\n';
  }
}