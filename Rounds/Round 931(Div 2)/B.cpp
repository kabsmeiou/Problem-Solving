#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    vector<int> a{1, 3, 6, 10, 15};
    while (T--) {
        int n;
        cin >> n;
        int ans = 0;
        auto finder = [&](int x) {
            if (x == 2 || x == 4 || x == 7 || x == 9 || x == 11 || x == 13 || x == 12 ) {
                return 2;
            } else if (x == 5 || x == 8 || x == 14) {
                return 3;
            }
            return x == 0 ? 0 : 1;
        };
        if (n >= 30) {
            ans += (n / 15) - 1;
            n = n % 15 + 15;
        }
        int residue = 1e9;
        for (int i = 0; i < 5; i += 1) {
            if (n >= a[i]) residue = min(n / a[i] + finder(n % a[i]), residue);
        }
        cout << ans + residue << '\n';
    }
}