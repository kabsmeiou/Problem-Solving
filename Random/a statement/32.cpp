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
        vector<string> matrix(n);
        int ans = 0, ok = 0, has_zero = 0;;
        for (int i = 0; i < n; i++) {
            cin >> matrix[i];
            for (int j = 0; j < matrix[i].size(); j++) {
                ans += (matrix[i][j] - '0');
                if (!(matrix[i][j] - '0')) has_zero = 1;
            } 
        }
        for (int i = 0; i + 1 < n; i++) {
            for (int j = 0; j + 1 < m; j++) {
                if ((matrix[i][j] == '0' && matrix[i + 1][j] == '0') || (matrix[i][j] == '0' && matrix[i][j + 1] == '0')
                    || (matrix[i][j] == '0' && matrix[i + 1][j + 1] == '0') || (matrix[i + 1][j] == '0' && matrix[i][j + 1] == '0')
                    || (matrix[i][j + 1] == '0' && matrix[i + 1][j + 1] == '0') || (matrix[i + 1][j] == '0' && matrix[i + 1][j + 1] == '0')) {
                    ok = 1;
                    break;
                }
            }
        }
        if (!ok) {
            if (has_zero) {
                ans -= 1;
            } else {
                ans -= 2;
            }
        }
        cout << ans << '\n';
    }
}