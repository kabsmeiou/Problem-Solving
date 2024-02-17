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
        for (int i = 0; i < n; i += 1) {
            cin >> a[i];
        }
        vector<int> unique_elements;
        for (int i = 0; i < n; i += 1) {
            if (i == 0) {
                unique_elements.push_back(i + 1);
            } else {
                if (a[i] != a[unique_elements.back() - 1]) {
                    unique_elements.push_back(i + 1);    
                }
            }
        }
        int q;
        cin >> q;
        while (q--) {
            int l, r;
            cin >> l >> r;
            auto next = upper_bound(unique_elements.begin(), unique_elements.end(), l);
            if ((*next) <= r && next != unique_elements.end()) {
                cout << l << ' ' << *next << '\n';
            } else {
                cout << -1 << ' ' << -1 << '\n';
            }
        }
        cout << '\n';
    }
}