#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n - 1);
        for (auto &c : a) cin >> c;
        cout << a[0] << ' ';
        for (int i = 0; i < n - 2; i++) {  
            cout << min(a[i], a[i + 1]) << ' ';
        }  
        cout << a[n - 2] << '\n';
    }
}