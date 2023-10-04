#include <bits/stdc++.h>

using namespace std;

void solve(){
    string k; cin >> k;
    k = "0" + k;
    int zeroes = k.size()-1;
    for(int i = k.size()-1; i>= 0; i--){
        if(k[i] >= '5'){
            k[i] = '0';
            zeroes = i;
            int idx = i - 1;
            while(k[idx] == '9'){
                k[idx] = '0';
                idx--;
            }
            k[idx]++;
        }
    }
    for(int i =zeroes; i < k.size(); i++){
        k[i] = '0';
    }
    if(k.front() == '0'){
        k = k.substr(1);
    }
    cout << k << endl;
    
}

int main(){
    int t; cin >> t;
    while(t--) solve();
}