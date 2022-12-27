#include <iostream>
using namespace std;
class AccBalance{
    public:
    AccBalance(){cout<<"Zero Balance"<<endl;}
    AccBalance(int balance){
        if(balance<0)
        cout<<"Has a Negative Balance";
        else if(balance==0)
        cout<<"Has a Zero Balance";
        else
        cout<<"Has a Positive Balance";
    }
};
int main()
{
    AccBalance defltBal;
    int balance;
    cin>>balance;
    AccBalance currBal(balance);
    return 0;
}
