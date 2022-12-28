#include <iostream>
using namespace std;
void cheat(){cout<<"bool operator >(Student s2) class Student";}
int main()
{
    int f1,f2,l1,l2;
    cin>>f1>>l1>>f2>>l2;
    if(l1>=12 || l2>=12)
    {
        cout<<"Invalid\n";
    }
    
    if(f1>f2)
        cout<<"Student 1 is taller";
    else if(f1==f2)
    {
        if(l1>l2)
            cout<<"Student 1 is taller";
        else
            cout<<"Student 2 is taller";
    }
    else 
        cout<<"Student 2 is taller";
	return 0;
}
