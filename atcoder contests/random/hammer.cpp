#include <bits/stdc++.h>
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  short x, y, z;
  cin >> x >> y >> z;
  int ans = abs(x);
  if (x < 0) {
    for (int i = 0; i > x; i--) {
      if (i == y) {
        if (z > y) {
          ans = abs(x) + (z > 0 ? abs(z * 2) : 0);
        } else {
          ans = -1;
        }
        break;
      }
    }
  } else {
    for (int i = 0; i < x; i++) {
      if (i == y) {
        if (z < y) {
          ans = abs(x) + (z < 0 ? abs(z * 2) : 0);
        } else {
          ans = -1;
        }
        break;
      }
    }
  }
  cout << ans;
}