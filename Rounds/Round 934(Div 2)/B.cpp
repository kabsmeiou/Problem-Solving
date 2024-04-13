#include <bits/stdc++.h>
#define int long long
using namespace std;  
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i += 1) cin >> a[i];
        for (int i = 0; i < n; i += 1) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        map<int, int> mp1;
        vector<int> doublesL, singles;
        for (int i = 0; i < n; i += 1) {
            mp1[a[i]] += 1;
            if (mp1[a[i]] == 2) {
                doublesL.push_back(a[i]);
            }
        }
        for (int i = 0; i < n; i += 1) {
            if (mp1[a[i]] < 2) {
                singles.push_back(a[i]);
            }
        }
        map<int, int> mp2;
        vector<int> doublesR;
        for (int i = 0; i < n; i += 1) {
            mp2[b[i]] += 1;
            if (mp2[b[i]] == 2) {
                doublesR.push_back(b[i]);
            }
        }
        if (2 * k == n || (doublesL.size() == 0 && doublesR.size() == 0)) {
            for (int i = 0; i < 2 * k; i += 1) {
                cout << a[i] << " \n"[i == 2 * k - 1];
            }
            for (int i = 0; i < 2 * k; i += 1) {
                cout << b[i] << " \n"[i == 2 * k - 1];
            }
        } else {
            int cur = 2 * k;
            for (int i = 0; i < k && i < doublesL.size(); i += 1) {
                cout << doublesL[i] << ' ' << doublesL[i] << ' ';
                cur -= 2;
            }
            if (cur > 0) {
                sort(singles.begin(), singles.end());
                int j = 0;
                while (cur > 0 && j < singles.size()) {
                    cout << singles[j] << ' ';
                    j += 1;
                    cur -= 1;
                }
            }
            cout << '\n';
            cur = 2 * k;
            for (int i = 0; i < k && i < doublesR.size(); i += 1) {
                cout << doublesR[i] << ' ' << doublesR[i] << ' ';
                cur -= 2;
            }
            if (cur > 0) {
                int j = 0;
                while (cur > 0 && j < singles.size()) {
                    cout << singles[j] << ' ';
                    j += 1;
                    cur -= 1;
                }
            }
            cout << '\n';
        }
    }
}