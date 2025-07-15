// Find the second largest element in the given Array

// INT_MIN (for finding the maximum element)
#include<iostream>
#include<vector>
using namespace std;
 
// int largestElementIndex(int arr[], int size){
//     int max = INT_MIN;
//     int maxindex = -1;
//     for(int i=0; i<size; i++){
//         if(arr[i] > max){
//             max = arr[i];
//             maxindex = i;
//         }
//     }
//     return maxindex;
// }

// Second approch with efficirnt solution
int secondLargestElement(int arr[], int size){
    int max = INT_MIN;
    int second_max = INT_MIN;

    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    for(int i=0; i<size; i++){
        if(arr[i]>second_max && arr[i] != max){
            second_max=arr[i];
        }
    }
    return second_max;
}


int main(){
    int arr[]={2,3,5,7,6,1};
    int n=7;

    // int indexOflargest = largestElementIndex(arr, 6);
    // cout<<arr[indexOflargest]<<endl;

    // // arr[indexOflargest] = -1;   (This is for uniqu number)
    // int largestElement = arr[indexOflargest];
    // for(int i=0; i<n; i++){
    //     if(arr[i]==largestElement){
    //         arr[i] = -1;
    //     }
    // }

    // int indexOfsecondLargest = largestElementIndex(arr, 6);
    // cout<<arr[indexOfsecondLargest];


    int SecondLargestElement = secondLargestElement(arr, n);
    cout<<arr[SecondLargestElement];
    return 0;
}