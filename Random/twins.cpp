#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n;
    std::cin >> n;
    std::vector<int> coins(n);
    int counter = 0;
    for(int i = 0; i < n; i++){
        std::cin>>coins[i];
        counter += coins[i];
    }
    sort(coins.begin(), coins.end(), std::greater<int>());
    int temp = 0;
    for(int i = 0; i < n; i++){
        temp += coins[i];
        counter -= coins[i];
        if(temp > counter){
            std::cout << i+1;
            break;
        }
    }
    return 0;
}