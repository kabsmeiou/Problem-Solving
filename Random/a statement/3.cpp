#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n == 1) {
            cout << 1 << '\n';
            continue;
        }
        string ret = "169" + string(n - 3, '0');
        int sz = n;
        do {
            int temp = stoi(ret);
            if (sqrt(temp) * sqrt(temp) == temp && to_string(temp).size() == sz) {
                cout << ret << '\n';
                n--;
            }
        } while (next_permutation(ret.begin(), ret.end()) && n >= 1);
    }
}