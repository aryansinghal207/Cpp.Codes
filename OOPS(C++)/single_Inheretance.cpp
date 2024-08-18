#include<iostream>
using namespace std;
class scooty {
    public:
    int topspeed;
    float mileage;
};
class bike : public scooty {  // Child class / Derived class
    public:
    int gears;
};
int main() {
    bike b1;
    b1.topspeed = 180;
    b1.mileage = 16.5;
    b1.gears = 5;
    cout << "Top Speed: " << b1.topspeed << endl;
    cout << "Mileage: " << b1.mileage << endl;
    cout << "Gears: " << b1.gears << endl;
    return 0;
}
