#include <map>
#include <iostream>
#include <queue>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    int front = 0;
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        std::cin >> b[i];
        if (a[i] == 0) front = i;
    }
    auto find = [&a, &b] (int x) {
        std::vector<int>::iterator pos = std::find(a.begin(), a.end(), x);
        if (pos == a.end()) return -1;
        int dist = std::distance(a.begin(), pos);
        int temp = b[dist];
        b[dist] = -1;
        return temp;
    };
    std::queue<int> ans;
    int cur = find(a[front]);
    ans.push(cur);
    while (cur != -1) {
        cur = find(cur);
        if(cur != - 1) ans.push(cur);
    }
    while (!ans.empty()) {
        std::cout << ans.front() << ' ';
        ans.pop();
    }
}