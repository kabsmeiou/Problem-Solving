#include <bits/stdc++.h>
#define int long long
using namespace std;

int fib(int n) {
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= n; i += 1) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

signed main() {
    int n;
    cin >> n;
    cout << fib(n) << '\n';
}