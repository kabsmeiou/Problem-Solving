#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int x;
    cin >> x;
    vector<int> ans;
    while (x != 0) {
      if (x % 2 == 0) {
        ans.push_back(0);
      } else {
        if (x % 4 == 1) {
          ans.push_back(1), x--;
        } else {
          ans.push_back(-1), x++;
        }
      }
      x /= 2;
    }
    cout << ans.size() << '\n';
    for (int bit = 0; bit < ans.size(); bit += 1) {
      cout << ans[bit] << " \n"[bit == ans.size() - 1];
    }
  }
}