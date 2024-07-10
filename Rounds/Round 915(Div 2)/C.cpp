#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main () {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int T;
  cin >> T;
  while (T--) {
    int n;
    string s;
    cin >> n >> s;
    vector<int> subsequence;
    for (int i = 0; i < n; i += 1) {
      while (!subsequence.empty() && s[subsequence.back()] < s[i]) subsequence.pop_back();
      subsequence.push_back(i);
    }
    int cnt = 0;
    while (cnt < subsequence.size() && s[subsequence[0]] == s[subsequence[cnt]]) cnt += 1;   
    int k = subsequence.size();
    for (int i = 0; i < k - i - 1; i += 1) swap(s[subsequence[i]], s[subsequence[k - i - 1]]);
    cout << (is_sorted(s.begin(), s.end()) ? k - cnt : -1) << '\n';
  }
}