#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n;) {
            if (s[i] == 'B') {
                i+=k;
                ans++;
            } else {
                i++;
            }
        }
        cout << ans << endl;
    }
}