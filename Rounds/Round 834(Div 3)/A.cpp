#include <bits/stdc++.h>

signed main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        std::string yes = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        std::string s;
        std::cin >> s;
        if (yes.find(s) != std::string::npos) {
            std::cout << "yes" << '\n';
        } else {
            std::cout << "no" << '\n';
        }
    }
}