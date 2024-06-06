#include <bits/stdc++.h>
#define int long long

using namespace std;

const int MOD = 1e9 + 7;

signed main() {
    int n;
    cin >> n;
    set<string> a;
    for (int i = 0; i < n; i += 1) {
        string s;
        cin >> s;
        a.insert(s);
    }
    cout << a.size();
} 