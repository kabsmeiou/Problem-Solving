#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        
        bool ok = true;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (n & 1) {
            cout << "YES" << '\n';
            continue;
        }

        if (n == 2) {
            cout << (a[0] <= a[1] ? "YES" : "NO") << '\n';
            continue;
        }
        
        for (int i = 1; i < n - 1; i++) {
            ll cur = a[i - 1] - a[i];
            a[i] = a[i - 1];
            a[i + 1] += cur;
        }

        ok = (a[n - 1] >= a[n - 2]);

       /* ll res = 0;
        for (int i = 0; i < n; i++) {
            if (i & 1) res += a[i];
            else res -= a[i];
        }
        ok = res >= 0; */
        cout << (ok ? "YES" : "NO") << '\n';

    }
}