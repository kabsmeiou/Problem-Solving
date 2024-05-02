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
        int cnt = 0;
        for (int i = 0; i < n; i += 1) {
            if (s[i] == 'U') {
                cnt += 1;
            }
        }
        cout << (cnt & 1 ? "YES" : "NO") << '\n';
    }
}