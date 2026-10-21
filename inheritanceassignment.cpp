#include <iostream>
#include <string>
using namespace std;
class User
{
protected: // this is protected such that user, customer and VIP can access it but the main function cannot.
    string name;
    string email;

public:
    User(string n, string e) : name(n), email(e) {};
    virtual ~User() = default;          // this is a destructor that is virtual and defaulted. It is necessary for clean up of child classes from base class pointer. Necessary to avoid memory leaks when deleting child class objects through base class pointers.
    void print_user_information() const // const because function doesn't modify any member variables.
    {
        cout << "Name: " << name << endl
             << "Email: " << email << endl;
    }
};
class Customer : public User
{
protected:
    string shipping_address;
    string phone_number;

public:
    Customer(string n, string e, string address, string number) : User(n, e), shipping_address(address), phone_number(number) {};
    void print_customer_information() const
    {
        print_user_information();
        cout << "Shipping address: " << shipping_address << endl
             << "Phone number: " << phone_number << endl;
    }
};

class VIP_GRADE1 : public Customer
{
private: // this is private because as of now, this is the last class in the inheritance so I find no use in making it public as no other can access it.
    double Discount_rate;

public:
    VIP_GRADE1(string n, string e, string address, string number, double rate) : Customer(n, e, address, number), Discount_rate(rate) {};
    void print_VIP_information() const
    {
        print_customer_information(); // prints all above information
        cout << "Applied discount rate: " << Discount_rate << "%" << endl;
    }
};

int main()
{
    Customer customer1("Alice Wonderland", "alicewonder@gmail.com", "Old PortBell Road, plot 67", "+256774378008");
    customer1.print_user_information();     // this should print only name and email of Alice
    customer1.print_customer_information(); // this should print name, email, address and phone number

    VIP_GRADE1 vip1("Lucky Dube", "luckydu@outlook.com", "Jamiaca Wild Street, plot 89", "+1 (856) 555-0744", 18.95);
    vip1.print_VIP_information(); // this should print all Lucky's information.
}