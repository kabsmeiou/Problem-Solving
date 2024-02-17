#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        if (b < a) swap(a, b);
        if (a & 1 && b & 1) {
            cout << "NO" << '\n';
            continue;
        }
        bool ok = false;
        if (a % 2 == 0 && a / 2 !=b || b % 2 == 0 && b / 2 != a) {
            ok = true;
        }   
        cout << (ok ? "YES" : "NO") << '\n';
    }
}