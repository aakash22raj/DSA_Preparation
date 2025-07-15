#include<iostream>
using namespace std;


void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    
}

int main()
{
    int a[4]={2,3,6,5};

    printArray(a, 4);
}