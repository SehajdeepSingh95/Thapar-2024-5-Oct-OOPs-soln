#include<iostream>
#include<vector>
using namespace std;

class Numbers{
    private:
    int a;
    int b;
    int c;
    int d;
    public:
    Numbers(){
        a=0;
        b=0;
        c=0;
        d=0;
    }
    Numbers(int a, int b){
        this->a=a;
        this->b=b;
        c=0;
        d=0;
    }
    Numbers(int w, int x, int y, int z){
        this->a=w;
        this->b=x;
        this->c=y;
        this->d=z;
    }

    Numbers(const Numbers &n){
        a=n.a;
        b=n.b;
        c=n.c;
        d=n.d;
    }
    void showdata(){
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
};

int main(){
    Numbers n1;
    Numbers n2(10,20);
    Numbers n3(30,40,50,60);
    Numbers n4(n2);
    Numbers n5=n1;
    
    n1.showdata();
    n2.showdata();
    n3.showdata();
    n4.showdata();
    n5.showdata();
    
    return 0;
}
