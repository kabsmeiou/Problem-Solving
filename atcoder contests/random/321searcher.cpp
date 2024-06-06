#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    int k;
    cin >> k;
    vector<int> ans;
    for (int i = 2; i < 1024; i += 1) {
        int cur = 0;
        for (int j = 9; j >= 0; j--) {
            if ((1 << j) & i) {
                cur *= 10, cur += j;
            }
        }
        ans.push_back(cur);
    }
    sort(ans.begin(), ans.end());
    cout << ans[k - 1] << '\n';
} 