#include<iostream>
using namespace std;
class Person {
protected:
    string name;
public:
    Person()
    {
        cout<<"Person Empty Constructor is called"<<endl;
    }
    Person(string n) {
        name=n;
        cout<<" Person Parameterized Constructor is called"<<endl;
    }
    ~Person() {
        cout<<"Person Destructor is called"<<endl;
    }
    void showPerson(){
        cout<<"The name of the the person is "<<name<<endl<<endl;
    }

};
class Student : virtual public Person { ////virtual keyword for diamond problem
protected:
    int ID;
    string section;
public:
    Student(string n, int i , string s) : Person(n) {
        ID = i;
        section = s;
         name=n;


        cout<<" Student Parameterized Constructor is called"<<endl;
    }
 Student()
    {
        cout<<"Student Empty Constructor is called"<<endl;
    }
    ~Student() {
        cout<<"Student Destructor is called"<<endl;
    }
    void showStudent(){
        cout<<"The Name of the the student is "<<name<<endl;
        cout<<"The ID of the the student is "<<ID<<endl;
        cout<<"The section of the the student is "<<section<<endl<<endl;
    }

};
class StudentScholarship : public Student {
protected :
    float CGPA;
public:
    StudentScholarship(string n, int i , string s, float c ) : Student (n,i,s) {
        CGPA = c;
         name=n;

         //again declare name for not showing in output
        cout<<" Student Scholarship Parameterized Constructor is called"<<endl;
    }
    StudentScholarship()
    {
        cout<<"Student Scholarship Empty Constructor is called"<<endl;
    }
    ~StudentScholarship() {
        cout<<"Student Scholarship Destructor is called"<<endl;
    }
    void showStudentScholarship(){
        cout<<"The name of the of student is "<<name<<endl;
        cout<<"The ID of the student is "<<ID<<endl;
        cout<<"The section of the the student is "<<section<<endl;
        cout<<"The CGPA of the student is "<<CGPA<<endl;


    if (CGPA <= 4.00 && CGPA >= 3.75) {
        cout<<"The student is selected for student scholarship"<<endl<<endl;}
    else {
        cout<<"The student is not getting any scholarship"<<endl<<endl;} }

};
class Employee : virtual public Person { //virtual keyword for diamond problem
protected:
    int salary;

public:
    Employee(string n, int sal ) : Person(n) {
        salary = sal;
         name=n;



        cout<<" Employee Parameterized Constructor is called"<<endl;
    }
    Employee()
    {
        cout<<"Employee Empty Constructor is called"<<endl;
    }
    ~Employee() {
        cout<<"Employee Destructor is called"<<endl;
    }
    void showEmployee(){
        cout<<"The name of the the Employee is "<<name<<endl;
        cout<<"The salary of the the Employee is "<<salary<<" taka"<<endl<<endl;
    }

};
class Faculty : public Employee {
protected:
    string subject;

public:
   Faculty(string n,int sal, string sub ) : Employee(n , sal) {
        subject = sub;
         name=n;

         //again declare name for not showing in output

        cout<<" Faculty Parameterized Constructor is called"<<endl;
    }
 Faculty()
    {
        cout<<"Faculty Empty Constructor is called"<<endl;
    }
    ~Faculty() {
        cout<<"Faculty Destructor is called"<<endl;
    }
    void showFaculty(){
        cout<<"The name of the the Faculty is "<<name<<endl;
        cout<<"The salary of the the Faculty is "<<salary<<" taka"<<endl;
        cout<<"The subject of the the Faculty is "<<subject<<endl<<endl;
    }

};
class Officer : public Employee {
protected:
    string ratings;

public:
   Officer(string n,int sal, string r ) : Employee(n , sal) {
        ratings = r;
         name=n;

         //again declare name for not showing in output

        cout<<" Officer Parameterized Constructor is called"<<endl;
    }
 Officer()
    {
        cout<<"Officer Empty Constructor is called"<<endl;
    }
    ~Officer() {
        cout<<"Officer Destructor is called"<<endl;
    }
    void showOfficer(){
        cout<<"The name of the the Officer is "<<name<<endl;
        cout<<"The salary of the the Officer is "<<salary<<" taka"<<endl;
        cout<<"The ratings of the the Officer is "<<ratings<<endl<<endl;
    }

};
class TA : public Student, public Employee {
private:
    string workroutine;
public:
    TA( string n, int i , string s, int sal, string w) :  Student (n, i ,s) , Employee(n,sal), Person(n)  {
        workroutine = w;
         name=n;

        //again declare name for not showing in output
        cout<<" TA Parameterized Constructor is called"<<endl;
    }
    TA()
    {
        cout<<"TA Empty Constructor is called"<<endl;
    }
    ~TA() {
        cout<<"TA Destructor is called"<<endl;
    }
    void showTA(){
        cout<<"The name of the the TA is "<<name<<endl;
        cout<<"The ID of the the TA is "<<ID<<endl;
        cout<<"The section of the the TA is "<<section<<endl;
        cout<<"The salary of the the TA is "<<salary<<" taka"<<endl;
        cout<<"The work routine of the the TA is "<<workroutine<<endl<<endl;
    }


};

int main() {
    Person p("Srabone");
    p.showPerson();

    Student s("Srabone",21450382 , "B3" );
    s.showStudent() ;

    StudentScholarship s1("Fagun ", 2145, "B5", 3.82);
    s1.showStudentScholarship();

    Employee e("Rajjak Hossain", 50000);
    e.showEmployee() ;

    Faculty f("Ripa Kundu", 30000, "Bangla");
    f.showFaculty() ;

    Officer o("Minza Rahman", 100000, "Very qualified");
    o.showOfficer() ;

    TA t("Oyshi",305,"B3",25000,"Morning shift");
    t.showTA() ;

    return 0;
}
