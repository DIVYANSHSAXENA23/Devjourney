/*You are developing a Bank Management System with multiple functionalities.
Create a base class "Person" with data members such as name, age, and address.
Inherit two classes from "Person":
• "BankAccount" with members account number, balance, and methods for
deposit and withdrawal.
• "Loan" with members loan amount, interest rate, and methods to
calculate loan EMI (Equated Monthly Installment).
Create a derived class "Customer" that inherits from both "BankAccount" and
"Loan" (demonstrating multipath inheritance). Implement appropriate methods
to:
• Perform deposit and withdrawal operations, checking for sufficient
balance.
• Calculate and display loan EMI based on the given interest rate and loan
amount.
• Display customer details along with their account balance and loan
information.
Write a C++ program to implement this scenario and resolve any ambiguity
caused due to inheritance*/
#include<iostream>
#include<math.h>
using namespace std;
class person{
    protected:
        string name;
        int age;
        string address;
    public:
        void get_details(){
            cout<<"enter name :";
            getline(cin,name);
            
            cout<<"enter address :";
            getline(cin,address);
            cout<<"enter age :";
            cin>>age;
        }
        void show(){
            cout<<"Name is:"<<name<<"\n";
            cout<<"Age is :"<<age<<"\n";
            cout<<"address is :"<<address<<"\n";
        }
};
class BankAccount:public person{
    protected:
        int account_no;
        double balance;
    public:
        void get_acc_details(){//new line
        cout<<"enter account number :";
        cin>>account_no;
        cout<<"enter initial Balance :";
        cin>>balance;
}
        void deposit(float amount){
            balance+=amount;
            cout<<"Amount deposited succesfully.\n";
            cout<<"balance is :"<<balance<<"\n";//new
        }
        void withdraw(float amount){//new
            if (amount>balance){
                cout<<"Insufficient balance!"<<endl;
            }else{
                balance-=amount;
                cout<<"Amount withdraw succesfully.\n";
                cout<<"balance is :"<<balance<<"\n";//new
            }

        }
        void display_BankInfo(){
            cout<<"Account number :"<<account_no<<"\n";
            cout<<"balance :"<<balance<<"\n";
        }
        };

class loan:public person{
    protected:
        int loan_amount;
        float Interest_rate;
        int months;
    public:
        void give_details(int l,float I,int m){
            loan_amount=l;
            Interest_rate=I;
            months=m;
        }
        double cal_EMI(){
            float y=months/12;
            double a=loan_amount*pow((1+(Interest_rate/100)),y);
            return a;
        }
        void display(){
            cout<<"loan amount is :"<<loan_amount<<"\n";
            cout<<"interest rate is :"<<Interest_rate<<"\n";
            cout<<"period is :"<<months<<"\n";
            cout<<"amount is :"<<cal_EMI()<<"\n";

        }
};
class Customer:public BankAccount,public loan{
    public:
        void show_cus_details(){
            person::show();
            Customer::display_BankInfo();
            loan::display();

        }
};
int main(){
    Customer o1;
    o1.get_details();
    o1.get_acc_details();
    int s;
    cout<<"enter 1 to deposit or enter 2 to withdraw :\n";
    cin>>s;
    if (s==1){
        double amount;
       
        cout<<"enter amount :";
        cin>>amount;
        o1.deposit(amount);
    }
    if (s==2){
        double amount;
        cout<<"enter amount :";
        cin>>amount;
        o1.withdraw(amount);
    }
    o1.show_cus_details();
}