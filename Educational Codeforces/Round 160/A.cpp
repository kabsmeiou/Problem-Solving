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
        string a = "";
        a += s[0];
        int pos = 1;
        while (pos < s.size() && s[pos] == '0') {
            a += s[pos];
            pos++;
        }
        if (pos == s.size()) {
            cout << -1 << '\n';
            continue;
        }
        string b = s.substr(pos);
        if (stoi(a) >= stoi(b)) {
            cout << -1 << '\n';
            continue;
        }
        cout << a << ' ' << b << '\n';
    }
}