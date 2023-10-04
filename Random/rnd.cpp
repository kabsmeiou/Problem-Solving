#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        ll sum_a = 0, sum_b = 0;
        for (auto &c : a) {
            cin >> c;
            sum_a += c;
        }

        for (auto &c : b) {
            cin >> c;
            sum_b += c;
        }

        int p = a[0], q = b[0];
        for (int i = 0; i < n; i++) {
            p = min(a[i], p);
            q = min(b[i], q);
        }

        cout << min(n * 1LL * q + sum_a, n * 1LL * p + sum_b) << endl;
    }
}