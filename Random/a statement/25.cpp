#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int l, w, a1, a2, b1, b2;
        cin >> l >> w >> a1 >> a2 >> b1 >> b2;
        int dist = b1 - a1;
        if (a1 >= b1) {
            cout << "DRAW" << '\n';
            continue;
        }
        if (a2 == b2) {
            cout << (dist & 1 ? "ALICE" : "BOB") << '\n';
            continue;
        }  
        if (dist & 1) {
            bool ok = false;
            if ((a2 < b2 && w - a2 <= (dist + 1) / 2) || (a2 > b2 && a2 - 1 <= (dist + 1) / 2) || (abs(a2 - b2) <= 1)) {
                ok = true;
            }
            cout << (ok ? "ALICE" : "DRAW") << '\n';
        } else {
            bool ok = false;
            if ((b2 < a2 && w - b2 <= dist / 2) || (b2 > a2 && b2 - 1 <= dist / 2) || (abs(a2 - b2)  <= 0)) {
                ok = true;
            }
            cout << (ok ? "BOB" : "DRAW") << '\n';
        }
    }
}