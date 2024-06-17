#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n);
  for (auto &x : a) cin >> x;
  for (auto &x : b) cin >> x;
  for (auto &x : c) cin >> x;
  int ans = 0;
  for (int k = 0; k <= 1e6; k += 1) { //brute force all possible number of dish
    bool ok = true;
    int fmax = 1e6;
    for (int i = 0; i < n; i += 1) {
      int cur = a[i] - b[i] * k; 
      if (cur < 0) {  //disregard number of dishes if not enough ingredients
        ok = false;
        break;
      }
      if (c[i]) fmax = min(fmax, cur / c[i]); //minimum cur / c[i] will be the maximum number of b dishes to get
    }
    if (ok) ans = max(ans, k + fmax);
  }
  cout << ans;
}