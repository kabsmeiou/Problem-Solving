#include <bits/stdc++.h>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1') cnt++;
    }
    cnt += (cnt % 2 == 1 ? 1 : 0);
    int cur = 0;
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == '1') cur++;
    }
    std::cout << (cnt >= cur ? "YES" : "NO") << '\n';
}