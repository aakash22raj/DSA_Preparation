// Find the unique number in a given Array where all the elements are being repeated twice with one value being unique

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(13);
    int arr[]={1,2,3,1,4,5,6,9,3,2,4,6,9};

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(arr[i]==arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }

    for(int i=0; i<v.size(); i++){
        if(arr[i]>0){
            cout<<arr[i]<<endl;
        }
    }

    return 0;
}