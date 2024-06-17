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
    auto findMex = [&](int l, int r) {
      vector<int> segment;
      for (int l; l < r; l += 1) {
        segment.push_back(a[l]);
      }
      sort(segment.begin(), segment.end());
      segment.erase(unique(segment.begin(), segment.end()), segment.end());
      for (int i = 0; i <= 18; i += 1) {
        if (segment[i] != i) {
          return i;
        }
      }
      return 19LL;
    };
    int ans = 0, k = 0;
    vector<pair<int, int>> segments;
    for (int i = 0; i < n; i += 1) {
      int sum = 0;
      for (int j = 0; j < n; j += 1) {
        sum += a[j];
        int have = findMex(i, j) * j - i;
        if (have > sum) {
          ans = max(sum, ans);
          sum = have;
          segments.push_back({i + 1, j + 1});
          k += 1;
        }
      }
    }
  }
}