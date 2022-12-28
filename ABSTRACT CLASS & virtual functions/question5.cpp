#include<iostream>
using namespace std;
class Smartphone{
    public:virtual void Listening()=0;
};
class LoveForMusic:public Smartphone{
    public:
    int T,S,q,c=0;
    void Listening(){
        cin>>T>>S>>q;
        while(S<T){
            c++;
            S*=q;
        }
        cout<<c;
    }
};
int main()
{
    LoveForMusic obj;
    obj.Listening();
    return 0;
}
