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
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        int u = a[0];
        int last = -1;
        int ans = 1e9;
        for (int i = 1; i < n - 1; i += 1) {
            if (u == a[i]) continue;
            ans = min(ans, i - last - 1);
            last = i;
        }
        ans = min(n - last - 1, ans); //for last element and nearest different element
        cout << (ans != n ? ans : -1) << '\n';
    }
}