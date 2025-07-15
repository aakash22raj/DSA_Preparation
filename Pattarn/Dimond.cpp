#include<iostream>
using namespace std;
int main(){
    int r;
    int space = r-1;
    cout<<"enter no ";
    cin>> r;
    for (int i = 0; i < r; i++){
        for (int j = 0; j < space; j++){
            cout<<" ";   
        }
        for (int j = 0; j < i+1; j++){
            cout<<"* ";
        }
        cout<<endl;
        space--;
    }

    space = 1;
    for (int i = r-1; i > 0; i--)
    {
        for (int j = 0; j < space; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        space++; 
    }
}