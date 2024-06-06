#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main() {
    int n;
    cin >> n;
    set<int> ans;
    for (int i = 1; i * i <= n; i += 1) {
        if (!(n % i)) {
            ans.insert(i);
            ans.insert(n / i);
        }
    }
    for (auto c : ans) {
        cout << c << '\n';
    }
} 