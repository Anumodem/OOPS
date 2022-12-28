#include <iostream>
#include<math.h>
using namespace std;
class Diff{
    public:
    int n;
    void getdata(){
        cin>>n;
    }
    int sumofsquare();
    int sumofnumsq(){
        return n*(n+1)*(2*n+1)/6;
    }

};

int main()
{
    Diff n;
    if(0)
    cout<<"friend void operator >> (istream &in, Diff &obj )";
    n.getdata();
    //int sq=n*n*(n+1)*(n+1)/4;
    //int sq2=n*(n+1)*(2*n+1)/6;
    cout<<n.sumofnumsq();
	return 0;
}
