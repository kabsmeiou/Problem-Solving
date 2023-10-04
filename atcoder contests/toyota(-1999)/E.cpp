#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> ret;
    set<int> rem;
    for (int i = 0; i < n; i++) {
        rem.insert(i);
    }

    vector<long long> ans(n);
    for (int i = 0; i < m; i++) {
        long long t, w, s;
        cin >> t >> w >> s;
        while (!ret.empty()) {
            auto it = ret.begin();
            if (it -> first > t) {
                break;
            }
            rem.insert(it -> second);
            ret.erase(it);
        }
        if (!rem.empty()) {
            auto it = rem.begin();
            ans[*it] += w;
            ret.emplace(t + s, *it);
            rem.erase(it);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}