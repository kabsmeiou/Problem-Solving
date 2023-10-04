#include <bits/stdc++.h>

using namespace std;

int main() {
    int T; cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int, int>> lake;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> lake[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0) {
                    if (lake[i][j + 1] != 0) {
                        ans += lake[i][j];
                    } else {
                        break;
                    }
                }
            }
        }

    }
}