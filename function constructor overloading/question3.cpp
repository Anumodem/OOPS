#include <iostream>
using namespace std;
class Appraisal
{
  int sal;
  public:
  void out(int salary)
  {
    cout<<"New Salary:"<<salary<<endl;
    cout<<"You have the Hike of Rs."<<salary-30000;
  }
  Appraisal(){sal=30000;cout<<"Old Salary:"<<sal<<endl;}
};
int main() 
{
    int sal;cin>>sal;
    string x="Appraisal newsalary(sal);";
    Appraisal oldsalary;
    oldsalary.out(sal);
    return 0;
}
