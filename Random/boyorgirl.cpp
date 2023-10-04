#include <iostream>
#include <unordered_map>

int main(){
    std::string str;
    std::cin >> str;
    std::unordered_map<char,int> m;
    int counter = 0;
    for(int i = 0; i < str.length(); i++){
        if(++m[str[i]] < 2){
            counter++;
        }
    }
    counter % 2 == 0 ? std::cout << "CHAT WITH HER!" : std::cout << "IGNORE HIM!";
    return 0;
}