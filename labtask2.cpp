#include<iostream>
using namespace std;

class Student{
private:
    string name="";
    int roll=0;
    string number="";
    string address="";

public:
    void setName(string nm){
        name = nm;
        }

    void setRoll(int r){
           roll= r;
        }

    void setNumber(string n){
           number = n;
        }

    void setAddress(string ad){
           address= ad;
        }

    void showStudentInfo(){
        cout<<"Student's name is "<<name<<endl;
        cout<<"Student's roll is "<<roll<<endl;
        cout<<"Student's phone number is "<<number<<endl;
        cout<<"Student's address is "<<address<<endl;

    }

};
int main(){

    Student s1,s2;



    s1.setName("Sam");
    s1.setRoll  (01);
    s1.setNumber ("01712751xxx");
    s1.setAddress("Bashundhara Residensial Area");

    s1.showStudentInfo();

    s2.setName ("John");
    s2.setRoll  (02);
    s2.setNumber ("0167150xxxx");
    s2.setAddress("Dhanmondi");

    s2.showStudentInfo();


    return 0;

}
