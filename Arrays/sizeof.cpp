#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4};

    // Size of array
    cout<<sizeof(array)<<endl;

    //length of array
    cout<<sizeof(array)/sizeof(array[0])<<endl;

    int arr[4];

    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
}