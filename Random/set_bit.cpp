#include<iostream>
using namespace std;
//Count total set bits in a number
unsigned int bits(unsigned int number)
{
 unsigned int count = 0;
 unsigned i;
 //display the total 8-bit number
 cout<<"8-bit digits of "<<number<<" is: ";
 for (i = 1 << 7; i > 0; i = i / 2)
 {
 (number & i)? cout<<"1": cout<<"0";
 }
 //calculate the total set bits in a number
 while (number)
 {
 count += number & 1;
 number >>= 1;
 }
 cout<<"\nCount of total set bits in a number are: "<<count;
}
int main()
{
 int number = 50;
 bits(number);
 return 0;
}