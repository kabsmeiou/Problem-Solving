#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int a, b, c;
    cin >> a >> b >> c;
    while ((b % 3) && c > 0) {
      b += 1;
      c -= 1;
    }
    cout << ((b % 3) ? -1 : a + b / 3 + (c % 3 ? c / 3 + 1 : c / 3)) << '\n';
  }
}