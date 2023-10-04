#include <iostream>
#include <vector>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    for(int i = 0; i < n; i++){
        std::cin>>coins[i];
    }
    if(n == 2){
        coins[0] == coins[1] ? std::cout << n : std::cout << 1;
        return 0;
    }
    std::cout << n/2+1;
    return 0;
}