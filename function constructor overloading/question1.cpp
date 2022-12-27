#include <iostream>
using namespace std;
class Salary{
    int cursal,bonus;
    public:
   int  Increment(int cursal){
       cout<<cursal<<endl;
       return 0;
    }
   int  Increment(int cursal,int bonus){
        cout<<cursal+bonus;
        return 0;
    }
};
int main()
{int cursal,bonus;
cin>>cursal>>cursal>>bonus;
    Salary empsal;
empsal.Increment(cursal);
empsal.Increment(cursal,bonus);
return 0;
}
