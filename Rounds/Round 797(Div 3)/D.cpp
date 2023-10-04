#include <bits/stdc++.h>

int main() {
    int tt;
    std::cin >> tt;
    while (tt--) {
        int n, k;
        std::string s;
        std::cin >> n >> k >> s;
        int cnt = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'B') cnt++; 
        }

        int mx = cnt;
        for (int i = k; i < n; i++) {
            if (s[i] == 'B') cnt++; 
            if (s[i - k] == 'B') cnt--;
            mx = std::max(cnt, mx);
        }

        std::cout << std::max(0, k - std::max(cnt, mx)) << std::endl;
    }
}