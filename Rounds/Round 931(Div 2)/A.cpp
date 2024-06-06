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
        sort(a.begin(), a.end());
        cout << ((a[n - 1] - a[0]) + (a[n - 2] - a[0]) + (a[n - 2] - a[1]) + (a[n - 1] - a[1])) << '\n';
    }
}