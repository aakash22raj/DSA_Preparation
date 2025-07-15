#include<iostream>
#include<vector>
using namespace std;

int main(){

    // find the element of last occurrence
    // 1 2 3 1 5 1
    // x=1
    // 5

    vector<int>v(6);
    for(int i=0; i<6; i++){
        cin>>v[i];
    }

    cout<<"Choose the number "<<endl;
    int x;
    cin>>x;

    int occurrence =- 1;

    // traverse from the first element
    for(int i=0; i<v.size(); i++){
        if(v[i]==x){
            occurrence=i;
        }
    }

    // traverse from the last element
    // for(int i=v.size()-1; i>0; i--){
    //     if(v[i]==x){
    //         occurrence=i;
    //         break;
    //     }
    // }

    cout<<occurrence<<endl;

    return 0;
}