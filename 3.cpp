#include<iostream>
#include<vector>
using namespace std;

class ShoppingCart{
    private:
    int cart_id;
    string customer_name;
    int item_count;
    public:
    ShoppingCart(int id, string name, int count){
        cart_id = id;
        customer_name = name;
        item_count = count;
    }
    ~ShoppingCart(){
        cout<<"Thank you"<<customer_name<<endl;
    }

    void display_cart(){
        cout<<"Cart ID: "<<cart_id<<endl;
        cout<<"Customer Name: "<<customer_name<<endl;
        cout<<"Item Count: "<<item_count<<endl;
    }
    
};

int main(){

    int n;
    cout<<"Enter number of shopping carts: ";
    cin>>n;
    ShoppingCart** arr = new ShoppingCart*[n];

    for(int i=0; i<n; i++){
        int id;
        string name;
        int count;
        cout<<"Enter cart id: ";
        cin>>id;
        cout<<"Enter customer name: ";
        cin>>name;
        cout<<"Enter item count: ";
        cin>>count;
        arr[i] = new ShoppingCart(id, name, count);
    }
    
    for(int i=0; i<n; i++){
        arr[i]->display_cart();
        delete arr[i];
    }
    delete []arr;
    return 0;
}