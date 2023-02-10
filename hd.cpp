#include<iostream>
#include<conio.h>


using namespace std;
class Mobile {
private:

    string name="";
    string number="";
    float balance=0;
    string osname="";
    bool lock=0;

public:

    void setname(string n) {
        name=n;
    }
    string getname() {
        return name;
    }
    void setnumber(string nm) {
        number=number;
    }
    string getnumber() {
        return number;
    }
    void setbalance(float b) {
        balance=b;
    }
    float getbalance() {
        return balance;
    }
    void setosname(string os) {
        osname=os;
    }
    string getosname() {
        return osname;
    }
    void setlock(int l) {
        lock=l;
    }
    bool getlock() {
        return lock;
    }
    void ShowInfo() {
        cout<<lock<<endl;
        cout<<name<<endl;
        cout<<number<<endl;
        cout<<balance<<endl;
        cout<<osname<<endl;
        cout<<"Recharge amount is: "<<recharge<<endl;
        cout<<"Call duration time is: "<<durationofcall<<endl;
        cout<<"Cut amount is: "<<amountcut<<endl;
        cout<<"New balance after call is: "<<balancenew<<endl;
    }



    int recharge=0;
    float durationofcall=0;
    float balancenew=0;
    float amountcut=0;
    Mobile(){
        recharge=0;
        durationofcall=0;
        balancenew=0;
        amountcut=0;
        cout<<"Empty Mobile constructor"<<endl;

    }
    Mobile(int r,float d, float b, float a,float n) {
        recharge=r;
        durationofcall=d;
        balancenew=b;
        amountcut=a;


        cout<<"parameterized Mobile constructor"<<recharge<<endl;

    }

    ~Mobile() {
        cout<<"destructor is called for "<<recharge<<endl;
    }

};
int main () {
    bool l;
    string rayhan;
    string num;
    float balance;
    string os;
    int rcrg;
    float calldu;
    float amnt;
    float newbalance;
    float newb;

    Mobile m1;

    cout<<"Enter the lock status: press 0 for unlocked phone & press 1 for locked phone"<<endl;
    cin>>l;
    m1.setlock (l);
    cout<<m1.getlock()<<endl;

    if (l==0)
    { cout<<"phone is unlocked"<<endl;

    Mobile m2;
    cout<<"Enter user's name: ";
    cin>>rayhan;
    m2.setname(rayhan);
    cout<<m2.getname()<<" is the user's name"<<endl;

    cout<<"Enter user's mobile number: ";
    cin>>num;
    m2.setnumber(num);
    cout<<m2.getnumber()<<" is the user's mobile number"<<endl;

    cout<<"Enter user's balance: ";
    cin>>balance;
    m2.setbalance(balance);
    cout<<m2.getbalance()<<" is the user's balance"<<endl;

    cout<<"Enter user's OS name: ";
    cin>>os;
    m2.setosname(os);
    cout<<m2.getosname()<<" is the user's OS name"<<endl;


    cout<<"Enter user's recharge amount: ";
    cin>>rcrg;
    newbalance=balance+rcrg;
    cout<<"balance after recharge is  "<<newbalance<<endl;

     cout<<"Enter user's call duration: ";
     cin>>calldu;
     cout<<"call duration is: "<<calldu<<endl;
     amnt=0.5*calldu;
     newb=newbalance-(0.5*calldu);
     cout<<"cut amount is: "<<amnt<<endl;
     cout<<"new balance is: "<<newb<<endl;



    Mobile m3;
          m3.ShowInfo();
          m3.setname(rayhan);
          m3.setnumber(num);
          m3.setbalance(balance);
          m3.setosname(os);




    }
    else
        cout<<"Phone is locked"<<endl;



getch();



}

