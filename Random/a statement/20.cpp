#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &c : a) cin >> c;
        //with an array of size n, if the nth element is less than the n - 1th element,
        //we can no longer make it sorted because we need two indices after n - 1th element
        //to change it. else, we can sort the entire array.
        if (a[n - 2] > a[n - 1]) {
            cout << -1 << '\n';
            continue;
        }
        if (is_sorted(a.begin(), a.end())) {
            cout << 0 << '\n';
            continue;
        }
        //note: we cant use two negative integers from the back of the array
        int cur = a[n - 1], pos = -1;
        for (int i = n - 2; i >= 0; i--) {
            if ((a[i] - cur) <= a[i]) {
                pos = i + 1;
                break;
            }
        }
        if (pos == -1) {
            cout << -1 << '\n';
            continue;
        }
        if (is_sorted(a.begin() + (pos - 1), a.end())) {
            cout << pos - 1 << '\n';
            for (int i = 0; i < pos - 1; i++) {
                cout << i + 1 << ' ' << pos << ' ' << n << '\n';
            }
        } else {
            cout << -1 << '\n';
        }
    }
}