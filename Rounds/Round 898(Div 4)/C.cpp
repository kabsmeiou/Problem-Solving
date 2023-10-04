#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        int n = 10;
        char ch;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> ch;
                if (ch == 'X') ans += min({i, j, n - i + 1, n - j + 1});
            }
        }
        cout << ans << endl;
    }
}