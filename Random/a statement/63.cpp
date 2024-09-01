#include <bits/stdc++.h>
using namespace std;
signed main() {
  int n, k, x;
  cin >> n >> k >> x;
  vector<int> a(n);
  for (auto &c : a) cin >> c;
  a.insert(a.begin() + k, x);
  for (auto c : a) cout << c << ' ';
}