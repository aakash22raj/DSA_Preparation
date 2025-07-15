// Count the number of triplets whose sum is equal to the given value x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(8);

    int arr[]={1,2,4,3,5,6,9,8};
    int x;

    cout<<"Enter the number"<<endl;
    cin>>x;
    
    int count=0;
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            for(int k=j+1; k<v.size(); k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    count++;
                }
            }
        }
    }
    cout<<count;

    return 0;
}