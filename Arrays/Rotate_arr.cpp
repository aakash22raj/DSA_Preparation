// Rotate the given array 'a' by 'k' steps, where k is non-negative
// note k can be greater than n as well where n is well n is the size of array 'a'

#include<iostream>
#include<vector>

using namespace std;
int main(){
    // int arr[]={1,2,3,4,5};
    // int n=5;
    // int k=3;

    // // k can be greater than n
    // k = k % n;

    // // extra array index usr
    // int ansarr[5];
    // int j=0;

    // // inserting last k elements in ans array
    // for(int i=n-k;i<n;i++){
    //     ansarr[j++]=arr[i];
    // }

    // // inserting first n-k element in ans array
    // for(int i=0; i<=k;i++){
    //     ansarr[j++]=arr[i];
    // }

    // for(int i=0; i<n; i++){
    //     cout<<ansarr[i]<<"";
    // }

    // cout<<endl;




    // Doing this question without useing extra array

    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    int k=2;
    k = k % v.size();

    reverse(v.begin(), v.end());
    reverse(v.begin(), v.begin()+k);
    reverse(v.begin()+k, v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;

    return 0;
}