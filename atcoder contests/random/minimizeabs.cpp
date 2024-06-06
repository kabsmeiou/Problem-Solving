#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int d;
    cin >> d;
    int ans = d, x = 0;
    while (d >= x * x) {
        int k = sqrt(d - x * x);
        for (int y = k - 3; y <= k + 3; y += 1) {
            ans = min(ans, abs(x * x + y * y - d));
        }
        x += 1;
    }
    cout << ans;
} 