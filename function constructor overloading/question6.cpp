#include <iostream>
using namespace std;
class Hospital{
    public:
    void bill(long int mdeicinebill,int days){
        cout<<mdeicinebill*days<<endl;
    }
    void bill(int roomrent,int days){
        cout<<roomrent*days;
    }
};
int main()
{
    Hospital ob;
    long int mdeicinebill,days;
    int roomrent;
    cin>>mdeicinebill>>days;
    ob.bill(mdeicinebill,days);
    cin>>roomrent>>days;
    ob.bill(roomrent,days);
    return 0;
}
