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
        const int n = 8;
        vector<char> board{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
        for (int i = 0; i < n; i++) {
            if (s[0] != board[i]) {
                cout << board[i] << s[1] << '\n';
            }
        }
        char ch = s[1];
        for (int i = 1; i <= n; i++) {
            if (ch - '0' != i) {
                cout << s[0] << i << '\n';
            }
        }
    }
}