#include <bits/stdc++.h>
#define int long long 
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int x, y;
    cin >> x >> y;
    cout << max((y + 1) / 2, (4 * y + x + 14) / 15) << '\n';
  }
}