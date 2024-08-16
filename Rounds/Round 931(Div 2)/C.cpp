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
        int k = -1;
        int x = 1, y = 1;
        cout << '?' << x << ' ' << y << '\n';
        cin >> k;
        if (k) {
            cout << '?' << (n + 1) / 2 << ' ' << k << '\n';
            cin >> k;
        }
    }
}