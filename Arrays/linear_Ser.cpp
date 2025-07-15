#include<iostream>
using namespace std;

int main(){
    int arr[]={2,3,6,23,45,89};
    int key=89;
    int size = sizeof(arr)/sizeof(arr[0]);

    int ans=-1;
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;

    return 0;
}