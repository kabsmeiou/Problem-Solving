//#pragma GCC optimize("Ofast")
//#pragma GCC target("avx,avx2,fma")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4.1,sse4.2,sse4a,avx,avx2,popcnt,tune=native")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>
using namespace std;
 
#ifdef LOCAL
	#define eprintf(...) {fprintf(stderr, __VA_ARGS__);fflush(stderr);}
#else
	#define eprintf(...) 42
#endif
 
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B) {
	return (ull)rng() % B;
}
 
#define mp make_pair
#define all(x) (x).begin(),(x).end()
 
clock_t startTime;
 
double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
 
void solve(){
    int N; cin >> N;
    ll mn = LLONG_MAX;
    ll ans = 0;
    vector<pair<ll, ll>> minimums;
    for(int i = 0; i < N; i++){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(int j = 0; j < n; j++){
            cin>>a[j];
            mn=min(a[j], mn);
        }
        sort(all(a));
        ll min = a[0];
        ll sub = a[1];
        minimums.push_back(make_pair(sub, min));
    }
    ll remove = LLONG_MAX;
    for(int i = 0; i < minimums.size(); i++){
        ans += minimums[i].first;
        remove = min(remove, minimums[i].first);
    }
    cout << ans + mn - remove << endl;
}
 
int main(){
    int T; cin >> T;
    while(T--) solve();
}