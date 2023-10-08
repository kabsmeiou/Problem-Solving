#include <bits/stdc++.h>

using std::vector;
#define ll long long
int main() {
    int n, d;
    std::cin >> n >> d;
    vector<int> a(n);
    for (auto &c : a) std::cin >> c;
    sort(a.begin(), a.end());
    int ans = 0;
    for (int l = 0, r = n - 1; r >= 0; r--) {
        ll cur = a[r];
        while (cur <= d && l < r) {
            cur += a[r];
            ++l;
        }
        if (cur <= d) break; 
        ++ans;
    } 
    std::cout << ans << '\n';
}