#include<iostream>
using namespace std;

class Account{

private:

     string AccountOwnerName = "";
     string AccountNumber    = "";
     float AccountBalance    =  0;
     string AccountType    = "";
     bool LockStatus;

public:

    void setAccountOwnerName(string n){
          AccountOwnerName = n;
    }
    void setAccountNumber(string d){
         AccountNumber = d;
    }
    void setAccountBalance(float b){
          AccountBalance = b;
    }
    void setAccountType(string t){
         AccountType = t;
    }
    void setLockStatus(bool l){
           LockStatus = l;
    }


    string getAccountOwnerName(){
        return AccountOwnerName;
    }
    string getAccountNumber(){
        return AccountNumber;
    }
    float getAccountBalance(){
        return MobileBalance;
    }
    string getMobileOSName(){
        return MobileOSName;
    }
    bool getLockStatus(){
       return LockStatus;
    }

Mobile(){

      cout<<" Empty Mobile Constructor "<<endl;
    }

Mobile(string n, string d, float b, string o, bool l){

        MobileOwnerName=n;
        MobileNumber=d;
        MobileBalance=b;
        MobileOSName=o;
        LockStatus=l;
        cout<<" Parameterized Mobile Constructor "<<endl;
     }

~Mobile(){

        cout<<" Destructor is called for "<<MobileOwnerName<<endl;
    }

    void showInfo(){

        cout<<" Mobile Owner Name: "<<MobileOwnerName<<endl;
        cout<<" Mobile Number    : "<<MobileNumber<<endl;
        cout<<" Mobile Balance   : "<<MobileBalance<<endl;
        cout<<" Mobile OS Name   : "<<MobileOSName<<endl;
        cout<<" Lock Status      : "<<LockStatus<<endl;
    }

    void Recharge(float amount){

              float NewBalance;
    NewBalance = amount+MobileBalance;
     cout<<"Recharge    : "<<amount<<" Taka "<<endl;
     cout<<"New Balance : "<<NewBalance<<" Taka "<<endl;

    }

    void CallSomeOne(float TimeDuration){

         if(LockStatus == false){
             float Totalcost,cost=0.5;
             Totalcost = cost*TimeDuration;

             cout<<"Caller time is     : "<<TimeDuration<<" minute "<<endl;
             cout<<"Cost for per minute: "<<cost<<" Taka "<<endl;
             cout<<"Total cost is      : "<<Totalcost<<" Taka "<<endl;
    }
         else{
            cout<<" Please unlock your Phone "<<endl;
}
    }
};
int main(){

    Mobile m1;
    Mobile m2(" Rayhan " , "01533469391" , 50.30 ," Android " , 0);

    m2.showInfo();
    m2.Recharge(39);
    m2.CallSomeOne(11);


    getch();

}
