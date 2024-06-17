#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  set<string> s;
  int cnt = 0;
  for (int i = 0; i < n; i += 1) {
    string x;
    cin >> x;
    if (s.insert(x).second) {
      reverse(x.begin(), x.end());
      s.insert(x);
      cnt += 1;
    }
  }
  cout << cnt;
} 