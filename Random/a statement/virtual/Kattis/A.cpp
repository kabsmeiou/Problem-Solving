#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int e, m, cur = 0;
    while (cin >> e && cin >> m) {
        cur += 1;
        int days = 0;
        int need1 = (365 - e) % 365, need2 = (687 - m) % 687;
        days += need1;
        if (need1 == need2) {
            cout << "Case " << cur << ": " << days << '\n';
            continue;
        }
        m += need1, e = 0;
        while (e != 0 || m != 0) {
            m = (m + 365) % 687;
            days += 365;
        }
        cout << "Case " << cur << ": " << days << '\n';
    }
}