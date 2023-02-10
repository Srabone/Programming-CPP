#include<iostream>
using namespace std;

class Box {
private:
    float length=0;
    float breadth=0;
    float height=0;
    float volume=0;

public:
    void setLength() {
        cout<<"Enter The Length of the box: ";
        cin>>length;
    }
    void setBreadth() {
        cout<<"Enter The Breadth of the box: ";
        cin>>breadth;
    }
    void setHeight() {
        cout<<"Enter The Height of the box: ";
        cin>>height;
    }

    float returnVolume()
    {
        volume= length*breadth*height;
        return volume;
    }

};
int main()
{
    Box b1;

    b1.setLength();
    b1.setBreadth();
    b1.setHeight();
    b1.returnVolume();

    cout <<"The Volume of the Box is : "<<b1.returnVolume();

    return 0;
    }
