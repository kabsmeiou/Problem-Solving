#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        set<string> st;
        for (int i = 0; i < n; i++) {
            string x;
            cin >> x;
            st.insert(x);
        }
        cout << st.size() << '\n';
    }
    
}