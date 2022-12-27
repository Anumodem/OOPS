#include <iostream>
using namespace std;
class GoodNum
{
    public:
    void check(int tNum)
    {
    int cnt=0;
    int rem;
    while(tNum>0)
    {
        rem=tNum%10;
        if(rem==0)
cnt++;
tNum/=10;
    }
    if(cnt==0)
cout<<"GOOD Number"<<endl;
    else
cout<<cnt;
    }
};
int main(){
    int N;
cin>>N;
GoodNum Learning;
Learning.check(N);
    return 0;
}
