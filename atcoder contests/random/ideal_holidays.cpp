#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<int> d(n);
  for (int i = 0; i < n; i += 1) {
    cin >> d[i], d[i] %= (a + b);
  }
  bool ok = false;
  sort(d.begin(), d.end());
  for (int i = 0; i < n; i += 1) {
    d.push_back(d[i] + a + b);
  }
  for (int i = 0; i < n; i += 1) {
    if (d[i + n - 1] - d[i] < a) {
      ok = true;
      break;
    }
  }
  cout << (ok ? "Yes" : "No");
}