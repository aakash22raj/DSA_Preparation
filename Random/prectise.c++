//#Include ko pre proceser and #include<iostream> ko pre proceser directrive kahate hai
/*#include<iostream>
using namespace std;
// yaha | se programe start hota hai
int main()
{
    int a;
    cout<<"enter the any value = ";
    cin>>a;
    if(a>0)
    {
        cout<<"a is positve"<<endl;
    }
    else
    {
        cout<<"a is not postve"<<endl;
    }*/


// "cin" in sab ko read nahi karata hai
      //    "_" = space
      //  "\t" = Tab
      //   "\n" = enter


    /*int a,b;
    cout<<"enter the volue of a ";
    cin>>a;
    cout<<"enetr the value of b ";
    cin>>b;
    if(a>b)
    {
        cout<<"a is greater \n"<<endl;
    }
    else
    {
        cout<<"b is greater \n"<<endl;
    } */

    /*int a,b;

    //cin>> a >> b ;

    a = cin.get();
    //a = '1' --> 49 ASCII

    //cout<<" value of a and b "<<a <<b <<endl;

    cout<<"value of a is "<< a << endl; */

// in below code have some thing problem
    /*char ch;
    cout<<"enter the any charecter ";
    cin>> ch;
    if('a'>=ch && ch<='z')
    {
        cout<<"This is lower case "<<endl;
    }
    else if('A'>=ch && ch<='Z')
    {
        cout<<"This is upper case "<<endl;
    }
    else if(0>=ch && ch<=9)
    {
        cout<<"This is numeric "<<endl;
    }*/

//printf==cout
//scanf==cin

// sum of 1 to n term

/*int n;
cout<<"enter the any number";
cin>>n;
int i=2;
while(i<=n)
{
    if(n%i==0)
    {
        if(n==2)
        {
           cout<<"it is prime "<< i <<endl;
        }
        else
        {
            cout<<"it is not prime "<< i <<endl;
        }  
    }    
    i=i+1;
}*/



#include<iostream>
using namespace std;
/*int printAP(int n)
{
    int i;
    i=3*n+7;
    cout<<i<<endl;
}
int main()
{
    int n;
    cout<<"enter the any number";
    cin>>n;
    printAP(n);
    return 0;
}*/

int fabonnci(int n)
{
    int a=0,b=1,c;
    c=a+b;
    a=b;
    b=c;
    
}
int main()
{
    int n;
    cout<<"enter the any number ";
    cin>>n;
    fabonnci(n);
}
