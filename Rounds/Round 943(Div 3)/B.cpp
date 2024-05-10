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
        string a, b;
        cin >> a >> b;
        int k = 0, j = 0;
        for (int i = 0; i < n; i += 1) {
            if (j >= m) break;
            while (a[i] != b[j] && j < m) {
                j += 1;
            }
            k += (a[i] == b[j]);
            j += 1;
        }
        cout << k << '\n';
    }
}