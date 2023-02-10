#include<iostream>
using namespace std;
class Account
{
private:
    string AccountName;
    string AccountNo;
    float AccountBalance;
    string AccountType;

public:
    void setAccountname(string nm)
    {
        AccountName=nm;
    }
    void setAccountno(string no)
    {
        AccountNo=no;
    }
    void setAccountbalance(float b)
    {
        AccountBalance=b;
    }
    void setAccounttype(string t)
    {
        AccountType=t;
    }

    string getAccountname()
    {
        return AccountName;
    }
    string getAccountno()
    {
        return AccountNo;
    }
    float getAccountbalance()
    {
        return AccountBalance;
    }
    string getAccounttype()
    {
        return AccountType;
    }

    Account ()
    {
        cout<<"Account empty constructor"<<endl;
    }
    Account (string nm,string no,float b,string t)
    {
        cout<<"Account parameterized constructor"<<endl;
        AccountName=nm;
        AccountNo=no;
        AccountBalance=b;
        AccountType=t;
    }
    ~Account()
    {
        cout<<"Destructor is called for "<< AccountName <<endl;
    }
    void Deposit(int amount)
    {
        AccountBalance= AccountBalance + amount;
        cout<<"Deposit amount is: "<<amount<<endl;
        cout<<"Now new balance after deposit is: "<<AccountBalance<<" TK"<<endl;
    }
    void Withdraw(int amount)
    {
        AccountBalance= AccountBalance - amount;
        cout<<"Withdraw amount is: "<<amount<<endl;
        cout<<"Now new balance after withdraw is: "<<AccountBalance<<" TK"<<endl;
    }
    void Transfer(int amount,Account receiver)
    {
        receiver.AccountBalance=receiver.AccountBalance+amount;
        cout<<"After transfer amount "<<amount<<" TK.Now balance is: "<<receiver.AccountBalance<<" TK"<<endl;
    }
    void ShowAccountDetails()
    {
        cout<<"Account name is: "<<AccountName<<endl;
        cout<<"Account no is: "<<AccountNo<<endl;
        cout<<"Account balance is: "<<AccountBalance<<endl;
        cout<<"Account type is: "<<AccountType<<endl;
    }
};
int main()
{
    Account a1;

    Account a2("Srabone Raxit","300",21300,"Savings");
    a2.ShowAccountDetails();
    a2.Withdraw(2500);


    Account a3("Falgune Raxit","301",20500,"Student");
    a3.ShowAccountDetails();
    a3.Deposit(5000);
    a2.Transfer(7500,a3);
    return 0;


}

