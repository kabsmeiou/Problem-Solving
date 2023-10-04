#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
    int n, x;
    cin >> n >> x;
    int mx = -1e9, mn = 1e9;
    vector<int> a(n);
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < 101; i++) {
        vector<int> b = a;
        b[n - 1] = i;
        sort(b.begin(), b.end());
        ll ret = 0;
        for (int j = 1; j < n - 1; j++) ret += b[j];
        if (ret >= x) {
            cout << i;
            return 0;
        }
    }
    cout << -1 << endl;
}