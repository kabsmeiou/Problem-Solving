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
    cin >> n;
    if (n == 1) {
      cout << 1 << ' ' << 1 << '\n';
      cout << 1 << ' ' << 1 << ' ' << 1 << '\n';
      continue;
    }
    int sum = 0;
    for (int i = 0; i < n; i += 1) {
      for (int j = 0; j < n; j += 1) {
        sum += max(i, j) + 1;
      }
    }
    cout << sum << ' ' << 2 * n << '\n';
    for (int i = n; i >= 1; i -= 1) {
      cout << 1 << ' ' << i << ' ';
      for (int p = 1; p <= n; p += 1) {
        cout << p << " \n"[p == n];
      }
      cout << 2 << ' ' << i << ' ';
      for (int p = 1; p <= n; p += 1) {
        cout << p << " \n"[p == n];
      }
    }
  }
}