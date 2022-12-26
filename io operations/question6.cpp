#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float num1,num2;
double resnum1,resnum2;
std::setprecision(6);
cin>>num1 >> num2 >> resnum1 >> resnum2;
cout<< fixed << setprecision(6) << num1 << endl << num2 << endl;
	return 0;
}
