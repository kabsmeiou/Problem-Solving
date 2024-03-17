#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int x, n;
        cin >> x >> n;
        //every number repeats on 2k - 2 intervals
        int p = x - n, q = n + x - 2, need = n * 2 - 2;
        set<int> ans;
        for (int i = 1; i * i <= p; i += 1) {
            if (p % i == 0) {
                if (i >= need && i % 2 == 0) {
                    ans.insert(i);
                }
                if (p / i >= need && (p / i) % 2 == 0) {
                    ans.insert(p / i);
                }
            }
        }
        for (int i = 1; i * i <= q; i += 1) {
            if (q % i == 0) {
                if (i >= need && i % 2 == 0) {
                    ans.insert(i);
                }
                if (q / i >= need && (q / i) % 2 == 0) {
                    ans.insert(q / i);
                }
            }
        }
        cout << ans.size() << '\n';
    }
}