#include <iostream>
using namespace std;
class TestClass
{ public:
class Salary{
  public:int deftsalary;
  Salary(){deftsalary=10000;cout<<deftsalary<<endl;}
  Salary(int sal) {
    cin>>sal;
    cout<<sal<<endl;
  }
};
};
int main(){
 TestClass::Salary obj1;
  int sal; cin>>sal;
  TestClass::Salary ExpectedSalary(sal);
  return 0;
}
