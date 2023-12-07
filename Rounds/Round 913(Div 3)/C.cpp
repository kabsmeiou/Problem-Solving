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
        int count[26] = {0};
        for (auto c : s) {
            count[c - 'a']++;
        }
        int mx = 0;
        for (int i = 0; i < 26; i++) {
            mx = max(mx, count[i]);
        }
        if (mx >= (n + 1) / 2) {
            int ans =  n - (n - mx) * 2;
            cout << ans << '\n';
        } else {
            if (n & 1) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        }
    }
}