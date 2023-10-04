#include <bits/stdc++.h>

using namespace std;

int main() {

    int tt; cin >> tt;

    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int ans = 0, cur = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                cur++;
            } else {
                ans = max(ans, cur);
                cur = 0;
            }   
        }
        cout << max(ans, cur) << endl;
    }
}