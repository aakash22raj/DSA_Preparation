#include<iostream>
using namespace std;
// find the duplicate of given number 
findDuplicate(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans^arr[i];
    }
    for(int i=0;i<arr.size();i++)
    {
        ans^1;
    }
    return ans;
}
// int findUnique(int arr[],int size)
// {

//     int ans=0;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^arr[i];
//     }
//     return ans;
// }
int main()
{
    int arr[50];
    int size;
    cout<<"Enter the size of arr ";
    cin>>size;
    cout<<"Enter the element of array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int y;
    //y = findUnique(arr,size);
    y = findDuplicate(arr,size);
    cout<<"The unique number is ";
    cout<<y;
    return 0;
}