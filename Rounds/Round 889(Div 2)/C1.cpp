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

ll sum(ll n){
    ll res = 0;
    for(int i = n; i>=1; i--){
        res+=i*i;
    }
    return res;
}
void solve(){
    int n; cin >> n;
    vector<int> a(n + 1, 0);
    int maxIndex = 1;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > 0) flag = true;
    }

    if (!flag) {
        cout << n - 1 << endl;
        for (int i = n - 1; i >= 1; i--) {
            cout << i << " " << i + 1 << endl;
        }
        return;
    }

    int mx = a[1];
    for (int i = 2; i <= n; i++) {
        if (a[i] > mx) {
            mx = a[i];
            maxIndex = i;
        }
    }

    cout << n*2 + 5 << endl;
    for (int i = 1; i <= 5; i++) {
        cout << maxIndex << " " << maxIndex << endl;
    }
    cout << 1 << " " << maxIndex << endl;
    cout << 1 << " " << maxIndex << endl;
    for (int i = 2; i <= n; i++) {
        cout << i << " " << i - 1 << endl;
        cout << i << " " << i - 1 << endl;
    }
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
}