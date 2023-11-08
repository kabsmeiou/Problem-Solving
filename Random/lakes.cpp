#include <bits/stdc++.h>

using namespace std;
bool isValid(int x, int y, int n, int m) {
    return x >= 0 && x < n && y >= 0 && y < m;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        vector<vector<int>> vis(n, vector<int>(m, false));
        std::function<int(int, int)> dfs = [&a, &vis, &dfs](int x, int y) -> int {
            int dx[] = {-1, 1, 0, 0};
            int dy[] = {0, 0, -1, 1};
            
            vis[x][y] = true;
            int sum = a[x][y];

            for (int i = 0; i < 4; i++) {
                int newX = x + dx[i];
                int newY = y + dy[i];
                if (isValid(newX, newY, a.size(), a[0].size()) && a[newX][newY] && !vis[newX][newY]) {
                    sum += dfs(newX, newY);
                }
            }

            return sum;
        };
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j]) {
                    int cur = dfs(i, j);
                    ans = max(ans, cur);
                }
            }
        }
        cout << ans << '\n';
    }
}