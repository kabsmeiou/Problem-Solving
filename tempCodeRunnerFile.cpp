#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        int umin = 1e9;
        for (auto& c : a) {
            cin >> c;
            umin = min(c, umin);
        }
        int pmin = 1e9;
        for (auto &c : b) {
            cin >> c;
            pmin = min(c, pmin);
        }

        int ans = 0;
        if (umin < pmin) {
            for (auto c : b) {
                ans += c + umin;
            }
        } else {
            for (auto c : a) {
                ans += c + pmin;
            }
        }
        cout << ans << endl;
    }
}