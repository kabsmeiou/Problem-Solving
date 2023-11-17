#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int sum = 0, consec = 0, mx = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            consec = x == -1 ? ++consec : 0;
            mx = max(mx, consec);
            sum += x;
        }
        sum += mx >= 2 ? 4 : 0;
        cout << sum - (!mx ? 4 : 0) << '\n';
    }
}