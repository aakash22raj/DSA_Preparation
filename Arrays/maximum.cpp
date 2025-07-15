#include<iostream>
using namespace std;
int main(){
    int arr[]={4,13,24,1,56};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    for(int i=0; i<size; i++){
        
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout<< max <<endl;

    return 0;
}