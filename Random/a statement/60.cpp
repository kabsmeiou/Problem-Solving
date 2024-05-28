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
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int sum = accumulate(a.begin(), a.end(), 0LL);
        if (!(sum % 3)) {
            cout << 0 << '\n';
            continue;
        }
        bool ok = false;
        for (int i = 0; i < n; i += 1) {
            if (!((sum - a[i]) % 3)) {
                ok = true;
                break;
            }
        }
        cout << (ok || ((sum + 1) % 3 == 0) ? 1 : 2) << '\n';
    }
}