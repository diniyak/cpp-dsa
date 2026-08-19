#include <iostream>
using namespace std;
class ReastaurantTable{
    public:
    int tablenum;
    int capacity;
    bool isOccupied;
    static int totaltable;
ReastaurantTable()
{
    tablenum=0;
    capacity=4;
    isOccupied=false
    totaltable++;

}
void setTableDetails()
{
    cin>>tablenum>>capacity>>isOccupied;
}
void display()
{
    cout<<"tablenumber: "<<tablenum<<" "<<"capacity: "<<capacity<<" "
    <<"is occupied: "<<isOccupied<<" "<<"total tables: "<<totaltable<<endl;
}
};
int ReastaurantTable::totaltable = 0;



int main()
{

}