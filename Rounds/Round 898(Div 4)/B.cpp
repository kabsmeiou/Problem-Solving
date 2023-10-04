#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        long long prod = 1, mn = 1e9;
        for (auto &c : a) {
            cin >> c;
            mn = min(mn, c);
        }
        bool flag = false;
        for (auto c : a) {
            if (c == mn && !flag) {
                c++;
                prod*=c;
                flag = true;
            } else {
                prod*=c;
            }
        }
        cout << prod << endl;
    }
}