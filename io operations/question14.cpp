#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ int price,loaves,regularprice;
 float discountrate,discount,finalprice;
 price=185;
 discount=60;
 cin>>loaves;
 regularprice=(price*loaves);
 cout<<"Regular Price="<<regularprice;
 discountrate=(regularprice*discount)/100;
 cout<<fixed<<setprecision(2)<<"\nAmount Discounted="<<discountrate;
 finalprice=regularprice-discountrate;
 cout<<fixed<<setprecision(2)<<"\nAmount to be paid="<<finalprice;
	return 0;
}
