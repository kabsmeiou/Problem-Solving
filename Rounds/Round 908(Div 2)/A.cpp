#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int n;
        string s;
        cin >> n >> s;
        int as = 0, bs = 0;
        for (int i = 0; i < n; i++) {
            as += (s[i] == 'A');
            bs += (s[i] == 'B');
        }
        cout << (s[n - 1]) << '\n';
    }
}