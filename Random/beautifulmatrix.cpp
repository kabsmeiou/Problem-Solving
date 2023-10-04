#include <bits/stdc++.h>
using namespace std;

int main(void){
    int matrix[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                cout << abs(i - 2) + abs(j - 2);
                return 0;
            }
        }
    }
}