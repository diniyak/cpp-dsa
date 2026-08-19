#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size: "<<endl;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int e,x;
    cout<<"enter the element and the index: "<<endl;
    cin>>e>>x;
    for(int i=n-1;i>=x;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[x]=e;
    for(int i=0;i<n+1;i++)
    {
        cout<<arr[i]<<" ";
    }
}