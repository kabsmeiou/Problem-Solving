#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        if (k >= n - 1) {
            cout << 1 << '\n';
        } else {
            cout << n << '\n';
        }
    }
}