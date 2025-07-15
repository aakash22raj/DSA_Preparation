#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    // for loop 
    for(int i=0; i<size; i++){
        // cout<<arr[i]<<endl;
    }

    // For each loop
    for(int each: arr){
        // cout<<each<<endl;
    }

    // While loop 
    int index;
    while(index<size){
        // cout<<arr[index];
        index++;
    }



    // How to take the input in array
    
    // for loop
    char vowels[5];

    // for(int i=0; i<5; i++){
    //     cin>>vowels[i];
    // }

    // for(int i=0; i<5; i++){
    //     cout<<vowels[i]<<" ";
    // }

    // for each loop
    for(char &element:vowels){
        cin>>element;
    }
    for(int i=0; i<5; i++){
        cout<<vowels[i]<<" ";
    }


    return 0;
}