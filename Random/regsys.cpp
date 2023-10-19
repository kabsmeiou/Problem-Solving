#include <bits/stdc++.h>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n;
    std::cin >> n;
    std::unordered_map<std::string, int> mp;
    while (n--) {
        std::string s;
        std::cin >> s;
        if (mp[s] == 0) {
            std::cout << "OK" << '\n';
        } else {
            std::cout << s << mp[s] << '\n';
        }
        ++mp[s];
    }
}