#include <bits/stdc++.h>
#define int long long
using namespace std;

int factorial(int n) {

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        map<int, int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[x]++;
        }
        int ans = 0, cur = 0;
        for (auto x : a) {
            ans += x.second * (x.second - 1) * (x.second - 2) / 6;
            ans += x.second * (x.second - 1) / 2 * cur;
            cur += x.second;
        }
        cout << ans << '\n';
    }
}