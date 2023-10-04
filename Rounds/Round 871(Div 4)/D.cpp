#include <bits/stdc++.h>

using namespace std;

bool ok (int n, int m) {
    if (n == m) {
        return true;
    } else if (n % 3 != 0) {
        return false;
    } else {
        return (ok(n / 3, m) || ok(2 * n / 3, m));
    }
}

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        int n, m;
        cin >> n >> m;
        ok(n, m) ? cout << "YES\n" : cout << "NO\n";
    }
}