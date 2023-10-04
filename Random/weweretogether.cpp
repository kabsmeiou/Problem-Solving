#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> numbers(n);
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >>numbers[i];
        }
        fill(a.begin(), a.end(), 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(numbers[i] % numbers[j] == 0) a[i]++;
            }
        }
        int max = *max_element(a.begin(), a.begin()+n);
        cout << max << endl;
    }
    return 0;
}