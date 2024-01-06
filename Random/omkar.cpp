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
        vector<int> used(n);
        for (int i = 0; i < m; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            used[b - 1] = 1;
        }
        for (int i = 0; i < n; i++) {
            if (!used[i]) {
                for (int j = 0; j < n; j++) {
                    if (i != j) {
                        cout << i + 1 << ' ' << j + 1 << '\n';
                    }
                }
                break;
            }
        }
    }
}