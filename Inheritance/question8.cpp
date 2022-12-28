#include <iostream>
using namespace std;
class ReceiveMesurement
{
};
class CalculateArea : public ReceiveMesurement
{int l,b;
public:
void area()
{
 cin>>l>>b;
 cout<<l*b;
}
};
int main()
{
CalculateArea mt;
mt.area();
	return 0;
}
