#include <iostream>
#include <string>
using namespace std;

// Implemention of Encapsulation using class Bank
class Bank
{

private:
// Implemention of data hiding using private access modifier
    string password;
    double balance;

public:
    string accountID;
    string username;

};

int main()
{

    Bank user1;
    user1.username = "Adi";
    user1.accountID = "1425@FakeID";

    cout << "Name of User 1: " << user1.username << endl;
    cout << "Account ID of User 1: " << user1.accountID << endl;

    return 0;
}