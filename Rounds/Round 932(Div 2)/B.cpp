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
    vector<int> pref(n + 1), suf(n + 1);
    vector<int> cnt(n + 1, 0);
    int mx = 0;
    for (int i = 0; i < n; i += 1) {
      cnt[a[i]] += 1;
      while (cnt[mx]) {
        mx += 1;
      }
      pref[i + 1] = mx;
    }
    cnt.assign(n + 1, 0);
    mx = 0;
    for (int i = n - 1; i >= 0; i -= 1) {
      cnt[a[i]] += 1;
       while (cnt[mx]) {
        mx += 1;
       }
       suf[i] = mx;
    }
    // for (auto c : pref) cout << c << ' ';
    // cout << '\n';
    // for (auto c : suf) cout << c << ' ';
    int index = -1;
    for (int i = 1; i < n; i += 1) {
      if (suf[i] == pref[i]) {
        index = i;
        break;
      }
    }
    if (index != - 1) {
      cout << 2 << '\n';
      cout << 1 << ' ' << index << '\n';
      cout << index + 1 << ' ' << n << '\n';
    } else {
      cout << -1 << '\n';
    }
  }
}