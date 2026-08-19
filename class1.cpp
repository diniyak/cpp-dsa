#include <iostream>
using namespace std;
class Rectangle
{ 
    public:
    int length;
    int breadth;
    void input()
    {
        cin>>length>>breadth;
    }
    void area()
    {
        int area=length * breadth;
        cout<<"area of the rectangle:"<<area<<endl;
    }
    void display()
    {
        cout<<"length: "<<length<<" "<<"breadth: "<<breadth<<endl;
    }
};
int main()
{
Rectangle r1,r2;

r1.input();
r2.input();
r1.display();
r2.display();
r1.area();
r2.area();


}