#include<iostream>
using namespace std;

void printDiamond(int n){

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout<<"*";
        }
        cout<<endl;
    }  
    
    
    // OR

    // int space = n - 1; 

    // for (int i = 0; i < n; i++){ 
    //     for (int j = 0;j < space; j++) 
    //         cout << " "; 
    //     for (int j = 0; j <= i; j++) 
    //         cout << "* "; 

    //     cout << endl; 
    //     space--; 
    // } 

    // space = 0; 

    // for (int i = n; i > 0; i--){ 
    //     for (int j = 0; j < space; j++) 
    //         cout << " "; 
    //     for (int j = 0;j < i;j++) 
    //         cout << "* ";

    //     cout << endl;
    //     space++; 
    // } 
}


int main(){
    int n;
    cin>>n;
    printDiamond(n);
    return 0;
}

//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *