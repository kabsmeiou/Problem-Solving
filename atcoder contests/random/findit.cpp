#include <bits/stdc++.h>
using namespace std;

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i += 1) {
    cin >> a[i];
  }
  vector<int> vis(n + 1, 0), path;
  int k = 1;
  while (!vis[k]) {
    vis[k] = 1;
    k = a[k];
  }
  int x = k;
  do {
    x = a[x];
    path.push_back(x);
  } while (x != k);
  cout << path.size() << '\n';
  for (auto u : path) cout << u << ' ';
}