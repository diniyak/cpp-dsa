#include<iostream>
using namespace std;
int calculate(int a,int b)
{
    return a+b;
}
double calculate(double a, double b)
{
    return a+b;
}
int calculate(int a, int b, int c)
{
    return a+b+c;
}
void displaymsg(string msg ="calculation completed")
{
    cout<<msg<<endl;
}
int main()
{
int a, b,c;
double d , e;
cin>>a>>b>>c>>d>>e;
cout<<calculate(a,b)<<endl;
cout<<calculate(d,e)<<endl;
cout<<calculate(a,b,c)<<endl;
displaymsg();
return 0;
}
