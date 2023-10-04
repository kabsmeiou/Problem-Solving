#include <bits/stdc++.h>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        std::string a, b;
        std::cin >> a >> b;
        if (a[0] == b[0] || a == b) {
            std::cout << "YES" << '\n';
            std::cout << a[0] << '*' << '\n';
            continue;
        }
        int x = a.size(), y = b.size();
        if (a[x - 1] == b[y - 1]) {
            std::cout << "YES" << '\n';
            std::cout << "*" << a[x - 1] << '\n';
            continue;
        }
        bool ok = false;
        std::string res;
        for (int i = 0; i < y - 1; i++) {
            std::string temp = "";
            temp += b[i];
            temp += b[i + 1];
            if (a.find(temp) != std::string::npos) {
                ok = true;
                res = "*" + temp + "*";
                break;
            }
        }
        if (ok) {
            std::cout << "YES" << '\n' << res << '\n';
        } else {
            std::cout << "NO" << '\n';
        }
    }
}