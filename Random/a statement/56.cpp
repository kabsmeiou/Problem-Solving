#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
        int m;
        cin >> m;
        vector<string> a(3);
        vector<vector<int>> vis(3, vector<int>(9, 0));
        for (int i = 0; i < 3; i += 1) {
            cin >> a[i];
            for (int j = 0; j < m; j += 1) {
                if (!vis[i][a[i][j] - '0']) {
                    vis[i][a[i][j] - '0'] = 1;
                }   
            }
        }

        vector<int> ans(10, 1001);
        for (int i = 0; i <= 9; i += 1) {
            vector<vector<int>> pos(3, vector<int>(3, -1));
            if (vis[0][i] && vis[1][i] && vis[2][i]) {
                for (int k = 0; k < 3; k += 1) {
                    bool ok1 = false, ok2 = false;
                    for (int j = 0; j < m; j += 1) {
                        if (a[k][j] - '0' == i && !ok1) {
                            pos[k][0] = j, ok1 = true;
                        } else if (a[k][j] - '0' == i && !ok2) {
                            pos[k][1] = j, ok2 = true;
                        } else if (a[k][j] - '0' == i) {
                            pos[k][2] = j;
                            break;
                        }
                    }
                }
                int mn = 1e9;
                for (int x = 0; x < 3; x += 1) {
                    if (pos[0][x] == -1) continue;
                    vector<int> temp;
                    for (int y = 0; y < 3; y += 1) {
                        if (pos[1][y] == -1) continue;
                        for (int z = 0; z < 3; z += 1) {
                            if (pos[2][z] == -1) continue;
                            //cout << pos[0][x] << ' ' << pos[1][y] << ' ' << pos[2][z] << '\n';
                            temp.push_back(pos[0][x]);
                            temp.push_back(pos[1][y]);
                            temp.push_back(pos[2][z]);
                            sort(temp.begin(), temp.end());
                            // for (int q = 0; q <= 2; q += 1) {
                            //     cout << temp[q] << " \n"[q == 2];
                            // }
                            int have = 0;
                            if (temp[0] == temp[1] && temp[1] == temp[2]) {
                                have = temp[0] + m + m;
                            } else if ((temp[0] == temp[1]) || (temp[1] == temp[2])) {
                                if (temp[0] == temp[1]) {
                                    have = max({temp[0], (temp[0] + m), temp[2]});
                                } else {
                                    have = max({temp[0], (temp[2] + m), temp[1]});
                                }
                            } else {
                                have = temp[2];
                            }
                            //cout << have << '\n';
                            mn = min(mn, have);
                            temp.clear();
                        }
                    }
                }
                ans[i] = min(ans[i], mn);
            }
        }
        int out = *min_element(ans.begin(), ans.end());
        cout << (out == 1001 ? -1 : out) << '\n';
}