#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  int ans = 0;
  while (true) {
    if (x * a >= y || x * a >= x + b || y / x < a) break;
    ans += 1, x *= a;
  }
  cout << ans + (y - x - 1) / b;
}