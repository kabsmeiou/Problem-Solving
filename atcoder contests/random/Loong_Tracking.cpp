#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  vector<pair<int, int>> snake;
  for (int i = n; i > 0; i -= 1) {
    snake.push_back({i, 0});
  }
  int k = n;
  for (int i = 0; i < q; i += 1) {
    int t;
    cin >> t;
    if (t == 1) {
      char c;
      cin >> c;
      pair<int, int> head = snake.back();
      if (c == 'R') {
        head.first += 1;
      } else if (c == 'L') {
        head.first -= 1;
      } else if (c == 'U') {
        head.second += 1;
      } else {
        head.second -= 1;
      }
      snake.push_back(head);
      k += 1;
    } else if (t == 2) {
      int p;
      cin >> p;
      cout << snake[k - p].first << ' ' << snake[k - p].second << '\n';
    }
  }
}