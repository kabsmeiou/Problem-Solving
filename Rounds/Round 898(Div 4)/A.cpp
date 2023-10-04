#include <bits/stdc++.h>

using namespace std;

int main() {
    int tt; cin >> tt;  
    while (tt--) {
        string s;
        cin >> s;
        int cnt = 0;
        string tmp = "abc";
        for (int i = 0; i < tmp.size(); i++) {
            if(tmp[i] != s[i]) cnt++;
        }
        if (cnt <= 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}