#include <iostream>
using namespace std;
void solve();
class Stadium
{
    public:
    Stadium operator - (Stadium obj2)
    {
        Stadium temp;
        return temp;;
    }
};
int main()
{
    solve();
	return 0;
}
void solve()
{
  int n1, n2, max_num, flag = 1;  
    cin >> n1 >> n2;      
    max_num = (n1 > n2) ? n1 : n2;  
    do   
    {  
        if(max_num % n1 == 0 && max_num % n2 == 0)  
        {  
            cout << max_num;  
            break;  
        }  
        ++max_num;
    }
    while(flag);
}
