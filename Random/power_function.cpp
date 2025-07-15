// #include <iostream>
// using namespace std;
// int power(int a, int b)
// {
//   int ans = 1;
//   for(int i=1;i<b;i++)
//     {
//       ans=ans*a;
//     }
//   return ans;
// }
// int main() {
//   int a,b;
//   cout<<"Enter the two number ";
//   cin>>a>>b;
//   int answer=power(a,b);
//   cout<<"answer is "<<answer ;
//   return 0;
// }


// #include<iostream>
// using namespace std;
// int power ()
// {
//   int a,b;
//   cin>>a>>b;
//   int ans=1;
//   for(int i=0;i<=b;i++)
//   {
//     return ans;
//   }
// }
// int main()
// {
//   int ans = power();
//   cout<<"answer is "<<ans<<endl;
//   return 0;
// }


// write a code it tell us the value is even or odd 

#include<iostream>
using namespace std;
int even (int r)
{
  if(r%2==0)
  {
    return 0;
  }
  else
  {
    return 1;
  }

}
int main()
{
  int x,i;
  cout<<"enter the value ";
  cin>>x;
  int ans = even(x);
  cout<<"answer is "<<ans;
  return 0;
}