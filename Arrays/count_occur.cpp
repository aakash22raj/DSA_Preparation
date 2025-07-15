// Count the number of occurrence of a particular element x.

#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int>v(6);
    for (int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter the number which want to count "<<endl;
    cin>>x;

    int occurrence = 0;
    for(int ele:v){
        if(ele==x){
            occurrence++;
        }
    }
    cout<<occurrence<<endl;

    return 0;
    
}