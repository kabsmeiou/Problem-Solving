#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    /*auto ctz = [](int n) {
        int cnt = 0;
        while (n % (1 << cnt) == 0) {
            cnt += 1;
        }
        return cnt - 1;
    };*/
    cout << __builtin_ctz(n) << '\n';
}