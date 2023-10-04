#include <iostream>

int main(){
    int k, l, m, n, d, c = 0;
    std::cin >> k >> l >> m >> n >> d;
    if(k == 1 || l == 1 || n == 1){
        std::cout << d;
        return 0;
    }
    for(int i = 1; i <= d; i++){
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) c++;
    }
    std::cout << c;
}