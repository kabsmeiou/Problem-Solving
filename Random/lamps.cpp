#include <bits/stdc++.h>

using namespace std;

void solve(){
    long long n; cin >> n;
    vector<pair<long long, long long>> lamps(n);
    for(long long i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        lamps[i]={a,-b};
    }
    sort(lamps.begin(), lamps.end());
    long long counter = 0;
    long long maxScore = 0;
    multiset<long long> ms;
    for(long long i = 0; i < n; i++){
        if(counter < lamps[i].first){
            maxScore+=lamps[i].second;
            counter++;
            ms.insert(lamps[i].first);
        }
        ms.erase(counter-1);
        counter = ms.size();
    }
    cout << maxScore*-1 << endl;
}

int main(){
    int t; cin >> t;
    for(t; t>0; t--){
        solve();
    }
    return 0;
}