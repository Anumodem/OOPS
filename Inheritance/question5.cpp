#include <iostream>
using namespace std;
class student
{
};
class laboratory
{
};
class marklist:public student,public laboratory
{
    long int reg;
    int m1,m2,m3,m4,m5;
    int lab;
    public:
    void get()
    {
    cin>>reg;
    }
    void labmark()
    {
    cin>>m1>>m2>>m3>>m4>>m5;
    cin>>lab;
    }
    void display()
    {        int avg=(m1+m2+m3+m4+m5+lab)/6;
        cout<<reg<<endl;
        cout<<m1+m2+m3+m4+m5+lab<<endl;
        cout<<avg;
    }
    
};
int main()
{
    marklist obj;
    obj.get();
    obj.labmark();
    obj.display();
	return 0;
}
