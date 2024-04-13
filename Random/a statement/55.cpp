#include <bits/stdc++.h>
#define int long long
using namespace std;
int xx[4]{1, -1, 0, 0};
int yy[4]{0, 0, 1, -1};
int n, m;
int dfs(int x, int y, vector<vector<int>> &vis, vector<vector<int>> &a) {
    int have = a[x][y];
    vis[x][y] = 1;
    for (int i = 0; i < 4; i += 1) {
        int nx = xx[i] + x, ny = yy[i] + y;
        if (nx >= 0 && nx < n && ny >= 0 && ny < m && !vis[nx][ny] && a[nx][ny] != 0) {
            have += dfs(nx, ny, vis, a);
        }
    }
    return have;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i += 1) {
            int cur = 0;
            for (int j = 0; j < m; j += 1) {
                if (a[i][j]) {
                    cur = dfs(i, j, vis, a);
                    ans = max(ans, cur);
                }
            }
        }
        cout << ans << '\n';
    }
}