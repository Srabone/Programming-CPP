#include<iostream>
using namespace std;

class Rectangle{
private:
     float length,breadth,area;

public:
    void setLength() {
        cout<<"Enter the length: ";
        cin>>length;
    }
    void setBreadth() {
        cout<<"Enter the breadth: ";
        cin>>breadth;
    }

    float returnArea() {
        area= length*breadth;
        return area;
    }

};
int main() {
    Rectangle r;

    r.setLength();
    r.setBreadth();
    r.returnArea();
    cout <<"The Area of Rectangle is : "<<r.returnArea()<<endl;

    return 0;
}
