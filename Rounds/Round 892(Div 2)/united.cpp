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
    ll ans = -1;
    vector<ull> a(N);
    vector<ull> b;
    vector<ull> c;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(all(a));
    b.push_back(a[0]);
    int x = 1, y = 0;
    for(int i = 1; i < N; i++){
        if(a[i] == b.back()){
            b.push_back(a[i]);
            x++;
        } else {
            c.push_back(a[i]);
            y++;
        }
    }
    if(y == 0){
        cout << ans << endl;
        return;
    }
    cout << x << " " << y << endl;
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < c.size(); i++){
        cout << c[i] << " ";
    }
    cout << endl;
}
 
int main(){
    int T; cin >> T;
    while(T--) solve();
}