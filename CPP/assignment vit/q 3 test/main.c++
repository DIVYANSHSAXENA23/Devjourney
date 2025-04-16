
#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;
    string address;
public:
    void get_details() {
     // flush newline before getline
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter address: ";
        getline(cin, address);
        cout << "Enter age: ";
        cin >> age;
    }
    void show() {
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Address: " << address << "\n";
    }
};

// BankAccount inherits virtually to avoid diamond problem
class BankAccount : virtual public Person {
protected:
    int account_no;
    double balance;
public:
    void get_acc_details() {
        cout << "Enter account number: ";
        cin >> account_no;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount deposited successfully.\n";
        cout << "Current balance: " << balance << "\n";
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance!\n";
        } else {
            balance -= amount;
            cout << "Amount withdrawn successfully.\n";
            cout << "Current balance: " << balance << "\n";
        }
    }

    void display_BankInfo() {
        cout << "Account Number: " << account_no << "\n";
        cout << "Balance: " << balance << "\n";
    }
};

// Loan also inherits virtually
class Loan : virtual public Person {
protected:
    double loan_amount;
    float interest_rate;
    int months;
public:
    void get_loan_details() {
        cout << "Enter loan amount: ";
        cin >> loan_amount;
        cout << "Enter interest rate (annual %): ";
        cin >> interest_rate;
        cout << "Enter loan duration (in months): ";
        cin >> months;
    }

    double calculate_EMI() {
        double monthly_rate = interest_rate / (12 * 100);
        return (loan_amount * monthly_rate * pow(1 + monthly_rate, months)) /
               (pow(1 + monthly_rate, months) - 1);
    }

    void display_loan_info() {
        cout << "Loan Amount: " << loan_amount << "\n";
        cout << "Interest Rate: " << interest_rate << "%\n";
        cout << "Duration: " << months << " months\n";
        cout << "Monthly EMI: " << calculate_EMI() << "\n";
    }
};

// Customer inherits from both BankAccount and Loan
class Customer : public BankAccount, public Loan {
public:
    void show_customer_details() {
        Person::show();             // only once due to virtual inheritance
        display_BankInfo();
        display_loan_info();
    }
};

// Main function
int main() {
    Customer c1;

    // Input details
    c1.get_details();
    c1.get_acc_details();
    c1.get_loan_details();

    // Transaction
    int choice;
    cout << "Enter 1 to Deposit or 2 to Withdraw: ";
    cin >> choice;
    double amount;

    if (choice == 1) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        c1.deposit(amount);
    } else if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        c1.withdraw(amount);
    } else {
        cout << "Invalid choice.\n";
    }

    // Final Output
    cout << "\n--- Customer Full Details ---\n";
    c1.show_customer_details();

    return 0;
}
