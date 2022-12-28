#include <iostream>
using namespace std;
class compare
{
    public:
    void operator ==(compare ob)
    {
    }
    int isPalindrome()
    {
   int num,n,sum,r;cin>>num;
   n=num;
   while(num>0)
   {
       r=num%10;
       sum=(sum*10)+r;
       num/=10;
   }
   if(n==sum)
   cout<<"Palindrome number";
   else
   cout<<"Not a Palindrome number";
   return 0;
    }
};
int main()
{
    compare ob1;
    ob1.isPalindrome();
	return 0;
}
