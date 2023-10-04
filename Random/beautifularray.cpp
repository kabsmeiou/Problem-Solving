#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N; cin >> N;
    vector<int> A;
    string ans = "";
    int min_n=INT_MAX;
    for(int i = 0; i < N; i++){
        int n; cin >> n;
        if(A.empty() || n >= min_n && n <= A.front()){
            A.push_back(n);
            ans+="1";
        } else ans+="0";
    }
    cout << ans << endl;
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}