#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &c : a) cin >> c;
    vector<int> dp(12);
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            int cur = j + i;
            dp[cur - 1] += 1;
        }
    }
    int have = 0;
    for (auto x : a) {
        have += (dp[x - 1] * 2 / 2);
    }
    cout << have / 36.0 << '\n';
}