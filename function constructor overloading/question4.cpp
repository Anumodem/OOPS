#include <iostream>
using namespace std;
class Student
{
    public:
    void Identity(string name,int id){
        cout<<name<<" "<<id<<endl;
    }
    void Identity(int id,string name){
        cout<<name<<" "<<id<<endl;
    }
};
int main()
{
    Student Details;
    string name;
    int id;
    cin>>name>>id;
    Details.Identity(name,id);
    cin>>id>>name;
    Details.Identity(id,name);
    return 0;
}
