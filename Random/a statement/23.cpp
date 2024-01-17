#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> a;
    for (int i = 0; i < n - 1; i++) {
        int q;
        cin >> q;
        a.push_back(q);
    }
    sort(a.begin(), a.end());
    int sum = 0;
    for (auto &c : a) {
        sum += c;
    }   
    sum -= (a.front() + a.back());
    int need = x - sum;
    if (need <= 0) {
        cout << 0 << '\n';
        return 0;
    }
    if (need <= a[0]) {
        cout << min(need, 0LL) << '\n';
    } else if (need <= a.back()) {
        cout << need << '\n';
    } else {
        cout << -1 << '\n';
    }
}