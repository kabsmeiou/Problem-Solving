#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size(), k = n / 2, ans = 0;
        for (int i = k; i >= 1; i--) {
            int max_cur = 0, cur = 0;
            for (int j = 0; j < n - i; j += 1) {
                if (s[j] == '?' || s[j + i] == '?' || s[j] == s[j + i]) {
                    cur += 1;
                    max_cur = max(max_cur, cur);
                    continue;
                } 
                cur = 0;
            }
            if (max_cur >= i) { //if we find a substring of length i 
                ans = i * 2;
                break;
            }
        }
        cout << ans << '\n';
    }
}