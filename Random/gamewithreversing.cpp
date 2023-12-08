#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s, t;
        cin >> n >> s >> t;
        int moves = 0, rev = 0;
        for (int i = 0, j = n - 1; i < n; i++, j--) {
            if (s[i] != t[i]) {
                moves++;
            }
            if (s[i] != t[j]) {
                rev++;
            }
        }
        moves = moves * 2 - (moves % 2), rev = max(rev * 2 - ((rev + 1) % 2), 2);
        int ans = min(moves, rev);
        cout << ans << '\n';
    }
}