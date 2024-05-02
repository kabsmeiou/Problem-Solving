#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        int n = s.size();
        int ans = 0;
        priority_queue<int, vector<int>, greater<int>> q;
        for (int i = 0; i < n; i += 1) {
            if (s[i] == '1') {
                q.push(i);
            } else if (s[i] == '0' && !q.empty()) {
                //cout << i << ' ' << q.top() << '\n';
                ans += i - q.top() + 1;
                q.pop();
                q.push(i);
            }
        }
        cout << ans << '\n';
    }
}