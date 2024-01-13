#include <bits/stdc++.h>
using namespace std;

int mex(vector<int> a) {
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    int n = int(a.size());
    for (int i = 0; i < n; ++i) if (a[i] != i) return i;
    return n;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> l, r;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            r[a[i]] = i;
            if (!l.count(a[i])) l[a[i]] = i; 
        }
        int cur = mex(a);
        bool ok = false;
        if (l.count(cur + 1)) {
            int le = l[cur + 1], ri = r[cur + 1];
            for (int i = le; i <= ri; i++) {
                a[i] = cur;
            }
            int now = mex(a);
            ok = (now == cur + 1);
            cout << (ok ? "YES" : "NO") << '\n';
            continue;   
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > cur || (l[a[i]] != r[a[i]])) {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
}