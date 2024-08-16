bool dfs(int x, int f, vector<int> vis, vector<vector<int>> &g) {
  if (vis[x] && x == f) return true;
  else if (vis[x]) return false;
  vis[x] = 1;
  for (auto v : g[x]) {
    if (dfs(v, f, vis, g)) {
      return true;
    }
  }
}