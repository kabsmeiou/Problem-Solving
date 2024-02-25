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
        int cnt = 0;
        char prev = -1;
        for (int i = 0; i < n; i+=1) {
            if (prev == -1) {
                prev = s[i];
                cnt += s[i] == '@';
                continue;
            }
            cnt += s[i] == '@';
            if (s[i] == '*' && prev == '*') break;
            prev = s[i];
        }
        cout << cnt << '\n';
    }
}