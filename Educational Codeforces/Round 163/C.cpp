#include <bits/stdc++.h>
#define int long long
using namespace std;  
const int N = 1e5 * 2 + 1;
int ans[2][N];
int dir[2][N];
int xx[4] = {0, 0, -1, 1};
int yy[4] = {1, -1, 0, 0};
void dfs(int x, int y, int n) {
    if (!ans[x][y]) {
        ans[x][y] = true;
        for (int i = 0; i < 4; i += 1) {
            int p = xx[i] + x;
            int q = yy[i] + y;
            if (p >= 0 && p < 2 && q >= 0 && q < n) {
                if (dir[p][q]) q += 1;
                else q -= 1;
                if (q >= 0 && q < n) dfs(p, q, n);
            }
        }
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string ax, ay;
        cin >> ax >> ay;
        for (int i = 0; i < n; i += 1) {
            dir[0][i] = (ax[i] == '>');
            ans[0][i] = 0;
        }
        for (int i = 0; i < n; i += 1) {
            dir[1][i] = (ay[i] == '>');
            ans[1][i] = 0;
        }
        dfs(0, 0, n);
        cout << (ans[1][n - 1] ? "YES" : "NO") << '\n';
    }
}