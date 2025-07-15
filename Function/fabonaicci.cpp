#include<iostream>
using namespace std;
int fabo(int n)
{
    int x=0,y=1,z;
    for(int i=0;i<n-2;i++)
    {
        z=x+y;
        x=y;
        y=z;
        cout<<z<<endl;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"0"<<endl;
    cout<<"1"<<endl;
    fabo(n);
} 