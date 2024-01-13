#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, q;
        cin >> n >> q;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int b, x;
            cin >> b >> x;
            if (b == 1) {
                a.push_back(x);
            }
        }
        for (int i = 0; i < q; i++) {
            int k;
            cin >> k;
            cout << a[k % a.size()] << ' ';
        }
        cout << '\n';
    }
}