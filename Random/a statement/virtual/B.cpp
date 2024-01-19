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
        string s, f;
        cin >> n >> s >> f;
        int need = 0, remove = 0;
        for (int i = 0; i < n; i++) {
            if (f[i] == '1' && s[i] != f[i]) {
                need += 1;
            }
            if (f[i] == '0' && s[i] == '1') {
                remove += 1;
            }
        }
        cout << max(need, remove) << '\n';
    }
}