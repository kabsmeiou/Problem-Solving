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
        vector<int> a;
        for (int i = 0; i < n; i += 1) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        vector<int> have;
        have.push_back(a[n - 1]);
        int cur = have.front();
        for (int i = n - 2; i >= 0; i -= 1) {
            if (cur < a[i]) {
                have.push_back(a[i] % 10);
                have.push_back(a[i] / 10);
                cur = a[i] / 10;
            } else {
                have.push_back(a[i]);
                cur = a[i];
            }
        }
        reverse(have.begin(), have.end());
        cout << (is_sorted(have.begin(), have.end()) ? "YES" : "NO") << '\n';
    }
}