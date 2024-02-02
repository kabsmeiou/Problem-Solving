#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if ((i + j) % k == (r + c) % k) {
                    cout << 'X';
                } else {
                    cout << '.';
                }
            }
            cout << '\n';
        }
    }
}