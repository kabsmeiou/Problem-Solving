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
        if (n & 1) {
            for (int i = 0; i < n; i++) {
                cout << 1 << " \n"[i == n - 1];
            }
        } else {
            for (int i = 0; i < n; i++) {
                if (i == 0) {
                    cout << 1 << ' ';
                } else if (i == 1) {
                    cout << 3 << ' ';
                } else cout << 2 << ' ';
                if (i == n - 1) cout << '\n';
            }
        }
    }
}