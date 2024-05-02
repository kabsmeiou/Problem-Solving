#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> mat(n, vector<char>(m));
        int w1 = 0, w2 = 0, w3 = 0, w4 = 0,
            b1 = 0, b2 = 0, b3 = 0, b4 = 0;
        for (int i = 0; i < n; i += 1) {
            for (int j = 0; j < m; j += 1) {
                cin >> mat[i][j];
                if (i == 0) {
                    w1 += mat[i][j] == 'W';
                    b1 += mat[i][j] == 'B';
                } else if (i == n - 1) {
                    w2 += mat[i][j] == 'W';
                    b2 += mat[i][j] == 'B';
                }
                if (j == 0) {
                    w3 += mat[i][j] == 'W';
                    b3 += mat[i][j] == 'B';
                } else if (j == m - 1) {
                    w4 += mat[i][j] == 'W';
                    b4 += mat[i][j] == 'B';
                }
            }
        }
        //cout << w1 << ' ' << b4 << '\n';
        if (n == 1 && m != 1) {
            cout << (mat[0][0] == mat[0][m - 1] ? "YES" : "NO") << '\n';
            continue;
        } else if (n != 1 && m == 1) {
            cout << (mat[0][0] == mat[n - 1][0] ? "YES" : "NO") << '\n';
            continue;
        }
        if ((w1 && w2 && w3 && w4) || (b1 && b2 && b3 && b4) || (n == 1 && m == 1)) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}