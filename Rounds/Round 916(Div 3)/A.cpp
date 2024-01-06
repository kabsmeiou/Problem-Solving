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
        string s;
        cin >> n >> s;
        vector<int> cnt(27, 0);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cnt[s[i] - 64] += 1;
        }
        for (int i = 0; i < n; i++) {
            if (cnt[s[i] - 64] >= s[i] - 64 && cnt[s[i] - 64] != -1) {
                ans++;
                cnt[s[i] - 64] = -1;
            }
        }
        cout << ans << '\n';
    }
}