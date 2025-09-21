#include<iostream>
using namespace std;

class Triangle{
    private:
    int base;
    int height;
public:
    Triangle(int base, int height){
        this->base = base;
        this->height = height;
    }
    float area(){
        return 0.5*base*height;
    }

    compareArea(Triangle t1, Triangle t2){
        if (t1.area() < t2.area()){
            cout<<"Triangle 2 has greater area"<<endl;
        }
        else{
            cout<<"Triangle 1 has greater area"<<endl;
        }
    }
};

int main(){
    Triangle t1(10,20);
    Triangle t2(10,10);
    t1.compareArea(t1, t2);
}
