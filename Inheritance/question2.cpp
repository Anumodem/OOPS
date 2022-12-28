#include <iostream>
using namespace std;
class Time
{public:
    int h,m,s;
};
class addTime : public Time
{
  public:
  int intime()
{
    cin>>h>>m>>s;
    return 0;
} 
  int  outtime(){
      cout<<h<<":"<<m<<":"<<s;
      return 0;
  }

};
int main()
{
addTime T;
T.intime();
T.outtime();

	return 0;
}
