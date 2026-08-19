#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int index;
    cout<<"enter the index you want to delete: ";
    cin>>index;
    for(int i=index;i<n;i++)
    {
        arr[index]=arr[index+1];
    }
    for(int i=0;i<n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}