#include <iostream>
using namespace std;
int main()
{int A[10][10],i,j,n,m;
cin>>n;
while(n--)
{
    cin>>m;
    for(j=0;j<m;j++)
    for(i=0;i<m;i++)
    cin>>A[i][j];
    for(i=0;i<m;i++)
    for(j=m-1;j>=0;j--)
    cout<<A[i][j]<<" ";
    cout<<"\n";
}

	return 0;
}
