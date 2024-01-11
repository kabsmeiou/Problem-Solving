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
        string s;
        cin >> n >> s;
        int minus = 0, plus = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '-') minus++;
            else plus++;
        }
        cout << abs(plus - minus) << '\n';
    }
}