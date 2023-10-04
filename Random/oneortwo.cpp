#include <bits/stdc++.h>

using namespace std;

void solve(){
    int N; cin >> N;
    vector<int> a(N);
    int have = 0;
    for(int k = 0; k<N; k++){
        cin >> a[k];
        if(a[k] == 2)have++;
    }
    int subs = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i]==2){
            subs++;
            have--;
        }
        if(have == subs && N >= 2){
            cout << i+1 << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    int T; cin >> T;
    while(T--)solve();
}