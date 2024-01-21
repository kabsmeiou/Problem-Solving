#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    vector<int> set(k + 1);
    iota(set.begin(), set.end(), 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        mp[x]++;
    }
    int least = 1e9;
    for (int i = 1; i <= k; i++) {
        least = min(mp[set[i]], least);
    }
    int options = 0;
    for (int i = 1; i <= k; i++) {
        if (mp[set[i]] == least) options += 1;
    }
    cout << options << '\n';
    for (int i = 1; i <= k; i++) {
        if (mp[set[i]] == least) cout << set[i] << " \n"[i == k];
    }
}