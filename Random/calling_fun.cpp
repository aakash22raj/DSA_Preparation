#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    cout<<"Printing the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"";
    }
    cout<<endl;
    cout<<"Printing Done "<<endl;
}
int main()
{
    int number[15];
    cout<<"Value at a 14 index "<<number[14]<<endl;
    int second[3]={5,7,11};
    cout<<"value at 2 index "<<second[2]<<endl;
    //int n=15;
    int third[15];
    printArray(third,15);
    //int n=10;
    int fourth[10]={0};
    printArray(fourth,10);
    //int n=20;
    int fivth[20];
    printArray(fivth,20);
}