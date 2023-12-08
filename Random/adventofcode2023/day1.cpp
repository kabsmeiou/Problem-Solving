#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s; 
    int ans = 0;
    string last = "5bszzkpcdxqkvkf7tgcone2";
    while (cin >> s) {
        string temp = "";
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                temp += s[i];
                break;
            }
        }
        for (int i = s.size() - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                temp += s[i];
                break;
            }
        }
        ans += stoi(temp);
        if (s == last) break;
    }
    cout << ans << '\n';
}