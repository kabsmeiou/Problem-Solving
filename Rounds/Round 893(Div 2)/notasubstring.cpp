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
    string s; cin >> s;
    string t = "";
    int n = s.length();
    if(s == "()"){
        cout << "NO" << endl;
        return;
    }
    bool alternating = false;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]){
            alternating = true;
            break;
        }
    }
    cout << "YES" << endl;
    if(!alternating){
        for(int i = 0; i < n; i++){
            cout << "(";
        }
        for(int i = 0; i < n; i++){
            cout << ")";
        }
    } else {
        for(int i = 0; i < n; i++){
            cout << "()";
        }
    }
    cout << endl;
}
 
int main(){
    int t; cin >> t;
    while(t--)solve();
}