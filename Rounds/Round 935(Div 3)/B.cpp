#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int a, b, m;
    cin >> a >> b >> m;
    cout << m / a + m / b + 2 << '\n';
  }
}