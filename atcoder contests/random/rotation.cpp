#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  string s;
  cin >> n >> q >> s;
  int cur = 0;
  for (int i = 0; i < q; i += 1) {
    int t, x;
    cin >> t >> x;
    if (t == 1) {
      cur += n - x;
    } else if (t == 2) {
      x--;
      cout << s[(x + cur) % n] << '\n';
    }
  }
} 