#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vector<vector<int>> m(2, vector<int>(n));
        for (int i = 0; i < n; i += 1) {
            m[0][i] = a[i] - '0';
        }
        for (int i = 0; i < n; i += 1) {
            m[1][i] = b[i] - '0';
        }
        int cnt = 1;
        string res = "";
        res += a[0];
        int x = 0, y = 0;
        bool used = false;
        int pos = n - 1;
        for (int i = 0; i < n - 1; i += 1) {
            if (m[x][y + 1] == 0) {
                res += '0';
                y += 1;
            } else {
                if (!used) {
                    if (m[x + 1][y] == 0) {
                        res += '0';
                        x += 1;
                        used = true;
                        pos = i;
                        continue;
                    } else {
                        res += (m[x][y + 1] + '0');
                        y += 1;
                        continue;
                    }
                } else {
                    res += (m[x][y + 1] + '0');
                    y += 1;
                }
            }
        }
        res += (b[n - 1]);
        for (int i = pos; i >= 1; i--) {
            if (b[i - 1] == a[i]) cnt++;
            else break;
        }
        cout << res << '\n' << cnt << '\n';
    }
}