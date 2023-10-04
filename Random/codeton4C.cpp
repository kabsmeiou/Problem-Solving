#include <bits/stdc++.h>

using namespace std;

int main() {

    int tt; cin >> tt;

    while (tt--) {
        long long n, c, d;
        cin >> n >> c >> d;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long ans = c * n + d;
        int duplicates = 0;
        for (int i = 0; i < n; i++) {
            if (i > 0 && a[i] == a[i - 1]) {
                duplicates++;
            }
            long long cur = c * (n - 1 - i + duplicates) + d *(a[i] - (i + 1 - duplicates));
        }
        
        cout << ans << endl;
    }
}