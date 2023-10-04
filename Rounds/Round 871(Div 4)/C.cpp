#include <bits/stdc++.h>

using namespace std;

int main() {

    int tt; cin >> tt;

    while (tt--) {
        int n; 
        cin >> n;
        vector<pair<int, string>> vpis(n);
        for (int i = 0; i < n; i++) {
            int m;
            string s;
            cin >> m >> s;
            vpis[i].first = m;
            vpis[i].second = s;
        }

        sort(vpis.begin(), vpis.end());
        int temp;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (vpis[i].second == "11") {
                temp = vpis[i].first;
                flag = true;
                break;
            }
        }
        int cur = 0;
        bool skill1 = false;
        for (int i = 0; i < n; i++) {
            if (vpis[i].second == "10") {
                skill1 = true;
                cur += vpis[i].first;
                break;
            }
        }

        bool skill2 = false;
        for (int i = 0; i < n; i++) {
            if (vpis[i].second == "01") {
                skill2 = true;
                cur += vpis[i].first;
                break;
            }
        }

        if (flag && skill1 && skill2) {
            cout << min(cur, temp) << endl;
            continue;
        } else if (!flag) {
            if (skill1 && skill2) {
                cout << cur << endl;
                continue;
            }
        } else if (flag) {
            cout << temp << endl;
            continue;
        }
        cout << -1 << endl;
    }
}