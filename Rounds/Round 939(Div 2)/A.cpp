#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int k, q;
    cin >> k >> q;
    vector<int> a(k);
    for (int i = 0; i < k; i += 1) {
      cin >> a[i];
    }
    for (int i = 0; i < q; i += 1) {
      int n;
      cin >> n;
      cout << min(n, a[0] - 1) << " \n"[i == q - 1];
    }
  }
}