#include <iostream>
using namespace std;
class CheckTriangle{
    int a,b,c;
    public:
    void readCoordinates(){
        cin>>a>>b>>c;
    }
    public:
    void isosceles(){
          if (a==b||a==c||b==c){
            cout<<"Can Form a ISOSCELES Triangle";
        }
        else{
            cout<<"Cant Form a ISOSCELES Triangle";
        }
    }
};
int main()
{  CheckTriangle consruct;
consruct.readCoordinates();
consruct.isosceles();

	return 0;
}
