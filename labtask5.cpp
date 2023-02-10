#include<iostream>
using namespace std;
class Employee {
private:
    string name="";
    string yearofjoining="";
    string salary="";
    string address="";
public:
    void setname(string nm) {
        name = nm;
    }
    void setyearofjoining(string yr) {
        yearofjoining = yr;
    }
    void setsalary(string s) {
        salary = s;
    }
    void setaddress(string a){
        address= a;
    }
    void showemployeeinfo() {
  cout<<name<<"  "<<yearofjoining<<"  "<<address<<"  "<<endl;
    }

};
int main() {
    Employee e1,e2,e3,e4;

    e1.setname("Name");
    e1.setyearofjoining("Year Of Joining");
    e1.setaddress("Address");
    e1.showemployeeinfo();

    e2.setname("Robert");
    e2.setyearofjoining("1994");
    e2.setaddress("64C-WallsStreat");
    e2.showemployeeinfo();

    e3.setname("Sam");
    e3.setyearofjoining("2000");
    e3.setaddress("68D-WallsStreat");
    e3.showemployeeinfo();

    e4.setname("John");
    e4.setyearofjoining("1999");
    e4.setaddress("26B-WallsStreat");
    e4.showemployeeinfo();

return 0;
}
