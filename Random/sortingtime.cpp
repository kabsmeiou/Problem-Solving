#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	// your code goes here
	int tt; cin >> tt;
	while (tt--) {
	    int n; 
	    cin >> n;
	    
	    vector<int> a(n);
	    for (int i = 0; i < n; i++) {
            cin >> a[i];
	    }
	    
	    sort(a.begin(), a.end());
	    int idx = (n / 2);
	    if (n&1) {
	        if (a[idx] != a[idx + 1]) {
	            vector<int> ans; 
	            int i = 0, j = n - 1;
	            for (i, j; i < j; i++, j--) {
	                ans.push_back(a[i]);
	                ans.push_back(a[j]);
	            }
	            ans.push_back(a[i]);
	            
	            for (int p = 0; p < n; p++) {
	                cout << ans[p] << " \n"[p == n - 1];
	            }
	            continue;
	        } else if (a[idx] != a[idx - 1]) {
	            vector<int> ans; 
	            int i = 0, j = n - 1;
	            for (i, j; i < j; i++, j--) {
	                ans.push_back(a[j]);
	                ans.push_back(a[i]);
	            }
	            ans.push_back(a[i]);
	            
	            for (int p = 0; p < n; p++) {
	                cout << ans[p] << " \n"[p == n - 1];
	            }
	            continue;
	        }
	        cout << -1 << endl;
	    } else {
	        if (a[idx] != a[idx - 1]) {
	            vector<int> ans;
	            for (int i = 0, j = n - 1; i < n; i++, j--) {
	                ans.push_back(a[j]);
	                ans.push_back(a[i]);
	            }
	            for (int p = 0; p < n; p++) {
	                cout << ans[p] << " "[p == n - 1];
	            }
	            continue;
	        }
	        cout << -1 << endl;
	    }
	    
	}
	return 0;
}
