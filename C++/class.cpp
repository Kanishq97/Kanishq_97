#include<iostream>
#include<string>
using namespace std;

class BankAccount{
    double balance;
    string accountnumber;
     
    protected:
     string ACName;
    
    public:
     BankAccount(string Name, string accNO){
        ACName=Name;
        accountnumber=accNO;
        balance = 0.0;
     }
    void deposit(double amount){
        if (amount>0)
        {
            balance+=amount;
            cout << "Deposited $:" << amount << endl;
        }
    } 
    void showBalance(){
        cout << "Balance $:" << balance << endl;
    }
    void display(){
        cout << "Account Holder:" << ACName << endl;
    }
};

class SavingsAccount : public BankAccount{
    public:
      SavingsAccount(string Name, string accNO)
       : BankAccount(Name,accNO){}
    void showHolder(){
        cout << "Account Holder:" << ACName << endl;
    }
    
};

int main(){
    BankAccount acc("Kanishq","K0907");
    acc.display();
    acc.deposit(1000);
    acc.showBalance();
    
    
    SavingsAccount sav("Leo", "A41Y0");
    sav.showHolder();

    return 0;
}