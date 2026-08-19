#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    float mark;

    void display()
    {
        cout<<name<<"\n"<<roll<<" "<<mark<<endl;
    }
};
int main()
{
    Student s1,s2;
    cin>>s1.name>>s1.roll>>s1.mark;
    cin>>s2.name>>s2.roll>>s2.mark;


}