#include <iostream>
#include <vector>
#include <string>

using namespace std;

class User {
private:
    string name;
    float rent;
    float CurrentBill;
    float wifi;
    float Bua;
    float Garbage;

public:
    User(string uname, float r, float cb, float w, float o ,float g) {
        name = uname;
        rent = r;
        CurrentBill = cb;
        wifi = w;
        Bua = o;
        Garbage=g;
    }

    float getTotalExpense() const {
        return rent + CurrentBill + wifi + Bua +Garbage;
    }

    void display() const {
        cout << "\n--- Expense Details for " << name << " ---\n";
        cout << "Rent:         " << rent << endl;
        cout << "CurrentBill:      " << CurrentBill << endl;
        cout << "Wi-Fi:        " << wifi << endl;
        cout << "Bua:        " << Bua << endl;
        cout << "Garbage:        " << Garbage << endl;
        cout << "Total:        " << getTotalExpense() << endl;
    }
};

int main() {
    vector<User> users;
    int numberOfUsers;

    cout << "Enter number of users: ";
    cin >> numberOfUsers;
    cin.ignore(); // clear newline from input buffer

    for (int i = 0; i < numberOfUsers; ++i) {
        string name;
        float rent, utility, wifi, other,Bua,Garbage, CurrentBill;

        cout << "\nEnter details for User " << i + 1 << ":\n";
        cout << "Name: ";
        getline(cin, name);
        cout << "Rent: ";
        cin >> rent;
        cout << "Current Bill: ";
        cin >> CurrentBill;
        cout << "Wi-Fi: ";
        cin >> wifi;
        cout << "Garbage: ";
        cin >> Garbage;
        cout << "Bua: ";
        cin >> Bua;
        cin.ignore(); // clear newline for next name input

        users.push_back(User(name, rent, CurrentBill, wifi, Bua,Garbage));
    }

    cout << "\n\n======== Summary ========\n";
    for (const auto& user : users) {
        user.display();
    }

    return 0;
}
