#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    string s;
    cin >> n >> s;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            cnt1 += 1;
        } else {
            cnt2 += 1;
        }
    }
    if (cnt1 != cnt2) {
        cout << -1 << '\n';
        return 0;
    }
    int ans = 0, cnt = 0, cur = 0;
    for (int i = 1; i <= n; i++) {
        if (s[i - 1] == '(') {
            cnt += 1;
            if (!cnt) ans += i - cur + 1;
        } else {
            if (!cnt) cur = i;
            cnt--;
        }
    }
    cout << ans << '\n';
}