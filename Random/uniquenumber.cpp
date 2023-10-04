#include <iostream>
#include <string>
#include <algorithm>

void solve(){
        int x;
        std::cin >> x;
        if(x > 0 && x < 10){
            std::cout << x << std::endl;
            return;
        }
        std::string num = "";
        int dum = 10;
        bool found = false;
        int c = 9;
        while(dum-- > 1 && !found){
            num+=std::to_string(dum);
            for(int i = 1; i < dum && !found; i++){
                int temp = i+c;
                //for(int j = 0; j < num.length(); j++){
                //    temp += num[j]-'0';
                //}
                if(temp == x){
                    num += std::to_string(i);
                    found = true;
                    break;
                }
            }
            if(!found)c+=dum-1;
        }
        if(!found){
            std::cout << -1 << std::endl;
        } else {
            std::reverse(num.begin(), num.end());
            std::cout << stoi(num) << std::endl;
        }
}

int main(){
    int t;
    std::cin >> t;
    while(t--){
        solve();
    }
    return 0;
}