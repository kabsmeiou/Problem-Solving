#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    if (n & 1) {
        cout << 0 << '\n'; 
    } else {
        int have = n / 2;
        int ans = 1;
        while (have >= 1) {
            ans <<= 1;
            have -= 1;
        }
        cout << ans << '\n';
    }
}