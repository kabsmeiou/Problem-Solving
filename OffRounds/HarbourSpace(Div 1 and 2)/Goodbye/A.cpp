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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &c : a) cin >> c;
    ll prod = 1;
    bool ok = true;
    for (int i = 0; i < n; i++) {
        prod *= a[i];
        if (prod > 2023) {
            ok = false;
            break;
        }
    }
    if (!ok) {
        cout << "NO" << '\n';
        return;
    }
    if (prod == 2023) {
        cout << "YES" << '\n';
        for (int i = 1; i <= k; i++) {
            cout << 1 << " \n"[i == k];
        }
    } else {
        int cur = prod;
        int missing = -1;
        for (int i = 1; i <= 2023; i++) {
            cur *= i;
            if (cur == 2023) {
                missing = i;
                break;
            } else {
                if (cur > 2023) break;
                cur = prod;
            }
        }
        if (missing == -1) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            cout << missing << ' ';
            for (int i = 2; i <= k; i++) {
                cout << 1 << ' ';
            }
            cout << '\n';
        }
        
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
}