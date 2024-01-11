#include <bits/stdc++.h>
#define int long long
using namespace std;

int lcm(int a, int b){
    int g = __gcd(a, b);
    return (a * b / g);
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        vector<int> b(n + 1, a.front());
        bool ok = true;
        for (int i = 0; i < n - 1; i++) {
            b[i + 1] = lcm(a[i], a[i + 1]);
        }
        b.back() = a.back();
        for (int i = 1; i < n; i++) {
            if (__gcd(b[i], b[i - 1]) != a[i - 1]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}