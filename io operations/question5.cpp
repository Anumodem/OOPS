#include <iostream>
using namespace std;
int main()
{
 int number,num,rem,result=0;
 cin>>number;
 num=number;
 while(num!=0) {
 rem = num%10;
 result+=rem*rem*rem;
 num/=10;
 }
 if(result==number)
 cout<<"Part of Memorable Coin";
 else
 cout<<"Not a Part of Memorable Coin";
return 0;
}
