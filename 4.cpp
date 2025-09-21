#include <iostream>
using namespace std;

class Donar {
private:
    string donar_name;
    double balance;
    string blood_group;

public:
    void set_details() {
        cout << "Enter donar name: ";
        cin >> donar_name;
        cout << "Enter balance: ";
        cin >> balance;
        cout << "Enter blood group: ";
        cin >> blood_group;
    }

    void display() {
        cout << donar_name << " " << balance << " " << blood_group << endl;
    }

    double get_balance() {
        return balance;
    }

    void set_balance(double amount) {
        balance = amount;
    }
};

class Recipient {
private:
    string recipient_name;
    double account_balance;
    double account_required;

public:
    void set_details() {
        cout << "Enter recipient name: ";
        cin >> recipient_name;
        cout << "Enter account balance: ";
        cin >> account_balance;
        cout << "Enter account required: ";
        cin >> account_required;
    }

    void display() {
        cout << recipient_name << " " << account_balance << " " << account_required << endl;
    }

    double get_balance() {
        return account_balance;
    }

    void set_balance(double amount) {
        account_balance = amount;
    }
};

void transfer(Donar &d, Recipient &r, double amount) {
    if (d.get_balance() >= amount) {
        d.set_balance(d.get_balance() - amount);
        r.set_balance(r.get_balance() + amount);
        cout << "Transfer successful" << endl;
    } else {
        cout << "Donar balance is not enough" << endl;
    }
}

int main() {
    Donar d1;
    d1.set_details();
    d1.display();

    Recipient r1;
    r1.set_details();
    r1.display();

    transfer(d1, r1, 1000);

    cout << "\n--- Updated Details ---\n";
    d1.display();
    r1.display();

    return 0;
}
