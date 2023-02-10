#include<iostream>
#include<string>
using namespace std;

class Person{
protected:
    string name;
public:
    Person(){
        cout<<"People-Empty Constructor is called"<<endl;
    }
    Person(string n){
        name=n;
        cout<<"People-Parameterized Constructor is called"<<endl;
    }
    ~Person(){
        cout<<"People-Destructor"<<endl;
    }
    void showPerson(){
        cout<<"The name of the the person is "<<name<<endl;
    }

};
class Employee: virtual public Person{
protected:
    double salary;
public:
    Employee(string n, double s):Person(n){
        salary = s;
        cout<<"Employee-Constructor is called"<<endl;
    }
    ~Employee(){
        cout<<"Employee-Destructor"<<endl;
    }
    void showEmployee(){
        cout<<"The name of the person is "<<name<<endl;
        cout<<"His salary is "<<salary<<endl;
    }
};

class Student: virtual public Person{
protected:
    string roll;
public:
    Student(string n, string r):Person(n){
        roll=r;
        cout<<"Student-Constructor is called"<<endl;
    }
    ~Student(){
        cout<<"Student-Destructor"<<endl;
    }
    void showStudent(){
        cout<<"The name of the of student is "<<name<<endl;
        cout<<"The roll of the student is "<<roll<<endl;
    }
};

class Faculty: public Employee{
private:
    string subject;
public:
    Faculty(string n, double s, string u):Employee(n,s){
        name=n;
        subject=u;
        cout<<"Faculty-Constructor is called"<<endl;
    }
    ~Faculty(){
        cout<<"Faculty-Destructor"<<endl;
    }
    void showFaculty(){
        cout<<"The name of the person "<<name<<endl;
        cout<<"The salary of the person is "<<salary<<endl;
        cout<<"The faculty of the person is "<<subject<<endl;
    }
};

class Officer: public Employee{
private:
    string renk;
public:
    Officer(string n, double s, string a):Employee(n,s){
        name=n;
        renk=a;
        cout<<"Officer-Constructor is called"<<endl;
    }
    ~Officer(){
        cout<<"Officer-Destructor"<<endl;
    }
    void showOfficer(){
        cout<<"The name of the person "<<name<<endl;
        cout<<"The salary of the person is "<<salary<<endl;
        cout<<"The category of the person is "<<renk<<endl;
    }
};

class SS: public Student{  //SS=ScholarshipStudent
private:
    double CGPA;
public:
    SS(string n, string r, double c):Student(n,r){
        name=n;
        CGPA=c;
        cout<<"ScholarshipStudent-Constructor is called"<<endl;
    }
    ~SS(){
        cout<<"ScholarshipStudent-Destructor"<<endl;
    }
    void showSS(){
        cout<<"The name of the of student is "<<name<<endl;
        cout<<"The roll of the student is "<<roll<<endl;
        cout<<"The CGPA of the student is "<<CGPA<<endl;

        if(CGPA>=3.75){
            cout<<"The student is selected for scholarship"<<endl;
        }
        else{
            cout<<"The student is not selected for scholarship"<<endl;
        }
    }
};

class TA: public Employee, public Student {
private:
    string help;
public:
    TA(string n, string r, double s, string h):Employee(n,s), Student(n,r){
        name=n;
        help=h;
		cout<<"TA Constructor called"<<endl;
	}
	void showTA(){
        cout<<"The name of the of TA is "<<name<<endl;
        cout<<"The roll of the TA is "<<roll<<endl;
        cout<<"The salary of TA is "<<salary<<endl;
        cout<<"The name of the solve topic is "<<help<<endl;
	}
};

int main(){
    Person p("Xyz");
    p.showPerson();
    cout<<""<<endl;
    Employee e=Employee("Abc", 12000);
    e.showEmployee();
    cout<<""<<endl;
    Student s=Student("Xyz", "21-45017-2");
    s.showStudent();
    cout<<""<<endl;
    Faculty f=Faculty("kamal", 15000, "IP");
    f.showFaculty();
    cout<<""<<endl;
    Officer o=Officer("korim",20000,"math");
    o.showOfficer();
    cout<<""<<endl;
    SS x=SS("Xyz", "21-XXXXX-2", 3.98);
    x.showSS();
    cout<<""<<endl;
    TA t=TA("Kamal", "21-XXXXX-2", 20000, "Inheritance");
    t.showTA();
    cout<<""<<endl;
return 0;
}
