#include <bits/stdc++.h>
 
#define ll long long
using namespace std;
 
void solve(){
    int N, k; cin >> N >> k;
    vector<ll> A(N);
    for(int i = 0; i <  N; i++){
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    ll sum = 0;
    //on cases where we have to remove all maximum
    for(int i = 0; i < N-k; i++){
        sum+=A[i];
    }
    ll ans = sum;
    int left = 0, right = N-k;
    //now we have to deal with the left side(removing minimums)
    for(int i = 1; i <= k; i++){
        sum -= (A[left] + A[left+1]);
        sum += (A[right]);
        left+=2, right++; //remember we remove 2 min and we increment right instead
        //of decrementing because we've dealt with right side already
        ans = max(sum, ans); //check max for every operation
    }
    cout << ans << endl;
}
 
int main(){
    int T; cin >> T;
    while(T--) solve();
}