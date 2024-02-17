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
        int sum = accumulate(a.begin(), a.end(), 0LL);
        int need = sum / n;
        bool ok = true;
        int bucket = 0;
        for (int i = 0; i < n; i += 1) {
            if (a[i] > need) {
                bucket += (a[i] - need);
            }
            if (a[i] < need) {
                bucket -= (need - a[i]);
            }
            if (bucket < 0) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}