#include <iostream>
using namespace std;

class vehicle {
    public:
        int x,y,z;

    int getX(){
        return this->x;
    }

    int getY(){
        return this->y;
    }

    int getZ(){
        return this->z;
    }
};

int main(){
    vehicle v;
    v.x = 2;
    int z = v.getX();
    cout << z;
}