#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int m;
        cin >> m;
        vector<string> a(3);
        vector<vector<int>> vis(3, vector<int>(10, 0));
        for (int i = 0; i < 3; i += 1) {
            cin >> a[i];
            for (int j = 0; j < m; j += 1) {
                if (!vis[i][a[i][j] - '0']) {
                    vis[i][a[i][j] - '0'] = 1;
                }   
            }
        }
        vector<int> ans(10, 1001);
        for (int i = 0; i < 10; i += 1) {
            vector<vector<int>> pos(3, vector<int>(3, -1));
            if (vis[0][i] && vis[1][i] && vis[2][i]) {
                for (int k = 0; k < 3; k += 1) {
                    bool ok1 = false, ok2 = false;
                    for (int j = 0; j < m; j += 1) {
                        if (a[k][j] == i + 1 && !ok1) {
                            pos[k][0] = i + 1, ok1 = true;
                        } else if (a[k][j] == i + 1 && !ok2) {
                            pos[k][1] = i + 1, ok2 = true;
                        } else if (a[k][j]) {
                            pos[k][2] = i + 1;
                            break;
                        }
                    }
                }
            }
        }
    } 
}