#include <bits/stdc++.h>
using namespace std;

int xx[6]{-1, 1, 0, 0, 1, 1};
int yy[6]{-1, 0, -1, 1, 0, 1};

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<int> x(n), y(n);   
  map<pair<int, int>, int> a;   
  for (int i = 0; i < n; i += 1) {
    cin >> x[i] >> y[i];
    a[{x[i], y[i]}] = i;
  }
  vector<bool> vis(n + 1, 0);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    if (!vis[i]) {
      vis[i] = 1;
      queue<int> adj;
      adj.push(i);
      while (!adj.empty()) {
        int cur = adj.front();
        adj.pop();
        for (int j = 0; j < 6; j++) {
          int dx = x[cur] + xx[j], dy = y[cur] + yy[j];
          if (a.count({dx, dy}) == 1) {
            int v = a[{dx, dy}];
            if (!vis[v]) {
              vis[v] = 1;
              adj.push(v);
            }
          }
        }
      }     
      ans += 1;
    }
  }  
  cout << ans;
}