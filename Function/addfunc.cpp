#include<iostream>
using namespace std;

int add(int n, int m){
    int sum = n + m;
    return sum;
}
int main(){
    int a, b;
    cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    add(a, b);
    cout<<"The sum is: "<< add(a, b);
}