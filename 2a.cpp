#include <iostream>
using namespace std;

class Car{
    private:
    int speed;
    int fuel;
    public:
    Car(int speed, int fuel){
        this->speed = speed;
        this->fuel = fuel;
    }
    void display(){
        cout << "Speed: " << speed << "\nFuel: " << fuel << "\n";
    }
};

int main(){
    Car c1(10, 20);
    c1.display();
    return 0;
}