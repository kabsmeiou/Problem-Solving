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
        vector<int> c(n);
        int pos = -1, cnt = 0;
        for (int i = 0; i < n; i += 1) {
            cin >> c[i];
            if (c[i] == 1) pos = i, cnt += 1;
        }
        if (pos == -1 || cnt > 1) {
            cout << "NO" << '\n';
            continue;
        }
        vector<int> a(n);
        for (int i = pos, j = 0; i < n + pos; i += 1, j += 1) {
            a[j] = c[i % n];
        }
        //for (int i = pos - 1; i >= 0; i -= 1) {
          //  a[i + pos] = c[i]; 
        //}
        bool ok = true;
        for (int i = 1; i < n; i += 1) {
            if (a[i] - a[i - 1] > 1) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}