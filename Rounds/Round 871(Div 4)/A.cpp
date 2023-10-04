#include <bits/stdc++.h>

using namespace std;

int main() {

    int tt; cin >> tt;

    while (tt--) {
        string s;
        cin >> s;
        string codeforces = "codeforces";
        int ans = 0;
        for (int i = 0; i < 10; i++) {
            if (s[i] != codeforces[i]) ans++;
        }
        cout << ans << endl;
    }
}