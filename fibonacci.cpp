#include <iostream>
using namespace std;
int fib(int n)
{
if(n==0) return 0;
if(n==1) return 1;
cout<<fib(n-1)+fib(n-2);
}
int main()
{ 
    int n;
    cout<<"enter num: ";
    cin>>n;
    fib(n);

}
