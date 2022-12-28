#include <iostream>
using namespace std;
class Student
{
    public:
    int marks,x=0;
    void accept()
    {
        cin>>marks;
    }};
class Test :public Student
{
    public:
    void check()
    {
        if(marks>=60)
            x=1;
        else
            x=0;
    }};
class Result :public Test
{
    public:
    void print()
    {
        if(x==1)
            cout<<"You have passed";
        else
            cout<<"You have failed";
    }};
int main()
{
    Result r;
    r.accept();
    r.check();
    r.print();
    return 0;
}
