// Count the number of elements strict;y greateer than value x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(6);
    for(int i=0; i<v.size(); i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter the number for find the count of greater no of ele "<<endl;
    cin>>x;

    int count = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;

    return 0;
}