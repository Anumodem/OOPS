#include <iostream>
using namespace std;
int main()
{
 int n,dig=0,rem;
 cin>>n;
 while(n!=0)
 {
 rem=n%10;
 dig=dig*10+rem;
 n/=10;
 }
 while(dig!=0)
 {
 rem=dig%10;
 switch(rem)
 {
 case 0:
 cout<<"Zero ";
 break;
 case 1:
 cout<<"One ";
 break;
 case 2:
 cout<<"Two ";
 break;
 case 3:
 cout<<"Three ";
 break;
 case 4:
 cout<<"Four ";
 break;
 case 5:
 cout<<"Five ";
 break;
 case 6:
 cout<<"Six ";
 break;
 case 7:
 cout<<"Seven ";
 break;
 case 8:
 cout<<"Eight ";
 break;
 case 9:
 cout<<"Nine ";
 break;
 };
 dig/=10;
 }
return 0;
}
