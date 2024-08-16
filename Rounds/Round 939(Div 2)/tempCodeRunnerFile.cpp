for (int i = 1; i <= n; i += 1) {
      cout << 1 << ' ' << i << ' ';
      for (int p = 1; p <= n; p += 1) {
        cout << p << " \n"[p == n];
      }
    }
    for (int i = 1; i < n; i += 1) {
      cout << 2 << ' ' << i << ' ';
      for (int p = 1; p <= n; p += 1) {
        cout << p << " \n"[p == n];
      }
    }
    cout << 1 << ' ' << 1 << ' ';
    for (int p = 1; p <= n; p += 1) {
      cout << p << " \n"[p == n];
    }