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
        int l = 0, r = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == '0') {
                l = 0LL;
            } else {
                l++;
                r = i + 1;
            }
            cout << r - l + 1 << " \n"[i == n - 2];
        }
    }
}