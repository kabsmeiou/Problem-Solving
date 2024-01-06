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
 
#define int long long

 
#define mp make_pair
#define all(x) (x).begin(),(x).end()
 
clock_t startTime;

double getCurrentTime() {
	return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}
 
void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &c : a) cin >> c;
    vector<int> ans(n);
    int sum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        cnt += (a[i] % 2 == 1);
        ans[i] = sum - cnt / 3;
        if (i > 0) {
            ans[i] -= (ans[i] % 2 == 1);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
    }
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T; cin >> T;
    while(T--) solve();
}