#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Payment{
    protected:
       double amount;
       string transactionId;

    public:
       Payment(double amt, string id) : amount(amt), transactionId(id){}
       
       virtual void process() = 0;
       virtual string getType() const = 0;

       virtual ~Payment(){}
};

class CreditCardPayment : public Payment{
    private:
       string cardNumber;

    public:
       CreditCardPayment(double amt, string id, string card) : Payment(amt,id), cardNumber(card){}
       
       void process() override{
        cout << "Processing Credit Card payment of $" << amount << endl;
        cout << "Card ending in: " << cardNumber.substr(cardNumber.length() -4) << endl;
        cout << "Transaction: " << transactionId << " - APPROVED" << endl;
       }

       string getType() const override{
        return "Credit Card";
       }
};

class PayPalPayment : public Payment{
    private:
       string email;

    public:
       PayPalPayment(double amt,string id,string e) : Payment(amt,id), email(e) {}
       
       void process() override{
        cout << "Processing PayPal Payment of $" << amount << endl;
        cout << "PayPal Account: " << email << endl;
        cout << "Transaction: " << transactionId << " - APPROVED" << endl;
       }
       
       string getType() const override{
        return "PayPal";
       }
};

class CryptoPayment : public Payment{
    private:
       string walletAddress;

    public:
       CryptoPayment(double amt,string id,string wallet) :  Payment(amt,id), walletAddress(wallet) {}

       void process() override{
        cout << "Processing Crypto Payment of $" << amount << endl;
        cout << "Wallet: " << walletAddress.substr(0,10) << "..." << endl;
        cout << "Transaction: " << transactionId << " - CONFIRMED" << endl;
       }

       string getType() const override{
        return "Cryptocurrency";
       }
};

int main(int argc, char const *argv[])
{
    vector<Payment*> payments;

    payments.push_back(new CreditCardPayment(150.00, "TXN-001", "1234567890123456"));
    payments.push_back(new PayPalPayment(89.99, " txn-002", "arjun@email.com"));
    payments.push_back(new CryptoPayment(500.00, "TXN-003", "0x6969Fcb05DIgandu67"));

    for(Payment* p : payments){
        cout << "\n=== " << p->getType() << " ===" << endl;
        p->process();
    }

    for (Payment* p : payments) {
            delete p;
    }
    return 0;
}
