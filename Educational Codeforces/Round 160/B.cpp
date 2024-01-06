#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int zeroes = 0, ones = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') zeroes += 1;
            else ones += 1;
        }

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') ones -= 1;
            else zeroes -= 1;
            if (zeroes < 0|| ones < 0) break;
        }
        cout << max(zeroes, ones) << '\n';
    }
}