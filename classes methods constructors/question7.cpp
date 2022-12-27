#include <iostream>
using namespace std;

class ChangeBase
{   public:
    void sumBase(int n,int k){
        int sum=0;
        while(n>0){
            sum += n%k;
            n = n/k;
        }
        cout<< sum;
    }
};
int main()
{
    ChangeBase Convert;
    int n, k;
    cin >> n >> k;
    Convert.sumBase(n,k);
	return 0;
}c
