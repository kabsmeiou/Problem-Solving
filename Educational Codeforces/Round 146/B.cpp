#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main() {
    int T;
    cin >> T;
    while (T--) {
        ll a, b;
        cin >> a >> b;
		ll ans = a + b + 100;
	    for (ll i = 0; i <= ans; i++) {
		    ans = min(ans, i + (a + i) / (i + 1) + (b + i) / (i + 1));
        }
        /*int ans = 0;
        auto divisor = [](int number) {
            for (int i = 2; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    return number / i;
                }
            }
            return 1;
        };
        int x = divisor(a), y = divisor(b);
        cout << x << ' ' << y << '\n';
        int umax = max(x, y);
        int umin = min(x, y);
        ans += (umin == 1 ? (x < y ? a : b) : umin + ((x < y ? a : b) / umin));
        ans += (umax == 1 ? (x > y ? a : b) - (x < y ? a : b) : (umax - ans) + ((x > y ? a : b) / umax));
        cout << ans << '\n';*/
    }
}