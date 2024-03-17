#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int m, k, a, b;
        cin >> m >> k >> a >> b;
        int need_k = m / k, need_1 = m % k;
        int rem_k = max(need_k - b, 0LL), rem_a = max(need_1 - a, 0LL);
        int left = max(a - need_1, 0LL);
        int extra = min(left / k, rem_k);
        cout << rem_k + rem_a - extra << '\n';
    }
}