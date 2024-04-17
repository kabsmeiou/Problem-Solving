#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int swp = 0;
        for (int i = 0; i < n; i += 1) {
            if (a[i] != b[i]) {
                bool ok = swp ^ (a[i] < b[i]);
                if (ok) swap(a[i], b[i]);
                swp = 1;
            }
        }
        cout << a << '\n' << b << '\n';
    }
}