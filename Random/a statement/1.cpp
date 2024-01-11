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
        int n = (int)s.size();
        if (is_sorted(s.begin(), s.end())) {
            cout << s << '\n';
            continue;
        }
        int start = 0;
        for (int i = n - 1; i >= 1; i--) {
            if (s[i] < s[i - 1]) {
                char cur = s[i];
                int j = i - 1;
                for (j;; j--) {
                    if (s[j] > cur) {
                        char now = min(++s[j], '9');
                        s.push_back(now);
                        s[j] = '0';
                        start++;
                    } else {
                        break;
                    }
                }
                i = j + 1;
            }
        }
        sort(s.begin(), s.end());
        for (int i = start; i < s.size(); i++) {
            cout << s[i];
        }
        cout << '\n';
    }
}