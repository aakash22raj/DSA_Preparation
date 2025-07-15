#include<iostream>
using namespace std;

int add(int a, int b=1, int c=2){
    return (a+b+c);
}


int main(){
    cout<<add(2)<<endl;  //5
    cout<<add(2, 2)<<endl;  //6
    cout<<add(2, 3, 4)<<endl;  //9
    return 0;
}