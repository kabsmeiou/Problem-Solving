#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int ans = 1e9;
        for (char i = 'a'; i <= 'z'; i++) {
            int cur = 0, csc = 0;
            for (char ch : s) {
                if (ch == i) {
                    csc = max(csc, cur ? __lg(cur) + 1 : 0);
                    cur = 0;
                } else {
                    cur++;
                }
            }
            csc = max(csc, cur ? __lg(cur) + 1 : 0);
            ans = min(csc, ans);
        }
        cout << ans << '\n';
    }
}