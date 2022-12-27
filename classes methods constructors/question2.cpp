#include <iostream>
using namespace std;
class Eliminate { public:
    int lastRemaining(int n){
        return (n == 1) ? 1 : (n / 2 - lastRemaining(n / 2) + 1) * 2;
    }
};
int main()
{   int num;
    cin>>num;
    Eliminate Number;
    cout<<(Number.lastRemaining(num));
	return 0;
    cout<<" void lastRemaining(int n) Number.lastRemaining(n); ";
}
