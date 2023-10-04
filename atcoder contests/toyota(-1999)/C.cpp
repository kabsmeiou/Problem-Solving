#include <bits/stdc++.h>

using namespace std;

int main() {
    int m;
    string a, b, c;
    cin >> m >> a >> b >> c;
    int ans = -1;
    for (int i = 0; i < m; i++) {
        int cur = i;
        char p = a[i % m + 1];
        int j = i + 1;
        bool flag = false, flag2 = false;
        while (j < m) {
            if (b[j % m + 1] == p) {
                cur = max(cur, j);
                flag = true;
                break;
            }
            j++;
        }
        int k = j + 1;
        while (k < m) {
            if (c[k % m + 1] == p && flag) {
                cur = max(cur, k);
                flag2 = true;
                break;
            }
            k++;
        }
        if (ans == -1 && flag && flag2) ans = cur;
        else if(flag && flag2) min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}