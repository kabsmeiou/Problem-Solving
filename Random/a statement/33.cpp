#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string ans = "";
        for (int i = 0; i < (n * k); i++) {
            ans += (i % k) + 'a';
        }
        cout << ans << '\n';
    }
}