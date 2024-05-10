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
        int y = 0;
        for (int i = 1; i <= n - 1; i += 1) {
            cout << i << ' ' << __gcd(i, n) + y << '\n';
            if (__gcd(i, n) + y >= y) {
                y = i;
            } 
        }
        cout << y << '\n';
    }
}