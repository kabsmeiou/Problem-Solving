#include <bits/stdc++.h>
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int a, b, l;
        cin >> a >> b >> l;
        int aa = 1;
        set<int> ans;
        while (aa <= l) {
            int bb = 1;
            while (bb * aa <= l) {
                if (l % (bb * aa) == 0) {
                    ans.insert(l / (bb * aa));
                }
                bb *= b;
            }
            aa *= a;
        }
        cout << ans.size() << '\n';
    }
}