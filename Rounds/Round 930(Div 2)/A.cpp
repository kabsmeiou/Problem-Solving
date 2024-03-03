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
        int k = 1;
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        while (1 << k <= n) {
            k += 1;
        }
        cout << (1 << k - 1) << '\n';
    }
}