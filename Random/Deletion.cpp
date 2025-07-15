#include <iostream>
using namespace std;
int main()
{
    int a[50], size, num, i;
    cout << "Define the array ";
    cin >> size;
    cout << "enter the element ";
    for (i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << "what you want to element ";
    cin >> num;
    if (num > size)
    {
        cout << "it is invalide " << endl;
    }
    else
    {
        for (i = num - 1; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }
        for (i = 0; i < num; i++)
        {
            cout << a[i] << endl;
        }
    }
    return 0;
}