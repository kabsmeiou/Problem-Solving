#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int team1 = 0, team2 = 0;
        int q1 = 0, q2 = 0, i;
        for (i = 1; i <= 10; i += 1) {
            if (i & 1) { 
                if (s[i - 1] == '1') {
                    team1 += 1;
                } else if (s[i - 1] == '?') {
                    q1 += 1;
                }
            } else {
                if (s[i - 1] == '1') {
                    team2 += 1;
                } else if (s[i - 1] == '?') {
                    q2 += 1;
                }
            }
            if (team1 > team2 + (10 - i + 1) / 2 || team1 + q1 > team2 + (10 - i + 1) / 2) {
                cout << i << '\n';
                break;
            } else if (team2 + q2 > team1 + (10 - i) / 2) {
                cout << i << '\n';
                break;
            }
        }
        if (i > 10) {
            cout << 10 << '\n';
        }
    }
}