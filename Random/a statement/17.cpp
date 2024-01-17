#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string ans = "";
    if (n == 1) {
        cout << 0 << '\n';
    }
    n -= 1;
    while (n > 0) {
        ans += (char) (n % 5 * 2 + '0');
        n /= 5;
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}