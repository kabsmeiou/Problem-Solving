#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int max = 0;
    for(int i = 0; i <s.length(); i++){
      for(int j = 0; j < s.length(); j++){
        string temp = s.substr(i, s.length()-j);
        string reversed = temp;
        reverse(reversed.begin(), reversed.end());
        if(temp == reversed){
          max = temp.length() > max ? temp.length() : max;
        }
      }
    }
    cout << max << endl;
    return 0;
}