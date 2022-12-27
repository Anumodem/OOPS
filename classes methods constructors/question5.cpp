#include <iostream>
#include <string>
using namespace std;
class library {
public:
    int rn,innings;
    string name;
    library(int r,string n,int code) {
        rn=r;
        name=n;
        innings=code;
    }
    void display() {
        cout<<"Roll No:"<<rn<<endl;
        cout<<"Name of the Student:"<<name<<endl;
        cout<<"Code of Book Accessed:"<<innings<<endl;
    }
};
int main()
{
    int r,r2, inn,inn2;
    string n,n2;
    cin>>r>>n>>inn;
    cin>>r2>>n2>>inn2;
    library lib1(r,n,inn);
    lib1.display();
    library lib2(r2,n2,inn2);
    lib2.display();
    return 0;
}
