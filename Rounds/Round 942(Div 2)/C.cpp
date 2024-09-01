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
    vector<int> a(n);
    for (auto &c : a) cin >> c;
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 1; i += 1) {
      int gap = (a[i + 1] - a[i]) * (i + 1);
      if (k > gap) {
        k -= gap;
      } else {
        int replacement = a[i] + k / (i + 1); // replace from 0th to ith
        for (int j = 0; j <= i; j += 1) a[j] = replacement;
        k %= (i + 1); // get remaining to distribute again;
        for (int j = 0; j < k; j += 1) a[j] += 1;
        k = 0; // no more coins after distribution
        break;
      }
    }
    int ans = 0 - n + 1;
    if (k) {
      ans += a.back() * n + k; // add remaining k
    } else {
      sort(a.begin(), a.end());
      for (int i = 0; i < n; i += 1) {
        ans += min(a[0] + 1, a[i]);
      }
    }
    cout << max(0LL, ans) << '\n';
  }
}