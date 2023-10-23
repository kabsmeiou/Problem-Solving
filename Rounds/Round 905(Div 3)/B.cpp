#include <bits/stdc++.h>
 
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int T;
    std::cin >> T;
    while (T--) {
        int n, k;
        std::cin >> n >> k;
        std::string s;
        std::cin >> s;
        std::unordered_map<char, int> mp;
        for (int i = 0; i < n; i++) mp[s[i]]++;
        int remove = 0;
        for (auto c : mp) remove += c.second & 1;
        std::cout << (remove - k <= 1 ? "YES" : "NO") << '\n';
    }
}