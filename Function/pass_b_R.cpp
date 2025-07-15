#include<iostream>
using namespace std;


void changevalue1(int z){
    z = 100;
}
void changevalue2(int &z){
    z = 100;
}

int main(){
    // int p = 5;
    // int &q = p;

    // q++;
    // cout<<p<<endl;
    // cout<<& p<<endl;
    // cout<<&q<<endl;

    int a=5;

    changevalue1(a);
    cout<<a<<endl;
    
    changevalue2(a);
    cout<<a<<endl;

    return 0;
}