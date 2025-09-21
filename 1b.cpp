#include <iostream>
using namespace std;

struct Items {
    int count = 20;   // number of items
};

struct Customers {
    int count = 12;   // number of customers
};

int main() {
    Items item;
    Customers customer;

    cout << "Number of items = " << item.count << endl;
    cout << "Number of customers = " << customer.count << endl;

    return 0;
}
