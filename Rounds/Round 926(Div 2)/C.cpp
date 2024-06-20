#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int k, x, a;
    cin >> k >> x >> a;
    if (x >= a) {
      cout << "NO" << '\n';
      continue;
    }
    k--;
    int sum = 0;
    for (int i = 1; i <= x + 1; i++) {
      sum += sum / k + 1;
      if (sum > a) break;
    }
    cout << (sum <= a ? "YES" : "NO") << '\n';
  }
}