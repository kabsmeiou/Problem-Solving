#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        cout << (a % 2 == sum % 2) << ' ' << (b % 2 == sum % 2) << ' ' << (c % 2 == sum % 2) << '\n'; 
    }
}