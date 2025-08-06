#include<iostream>
using namespace std;

int main(){
    // int age;
    // cin>>age;

    // if(age>=18 && age <= 34){
    //     cout<< "Adult"<<endl;
    // }else if(age >= 35&& age <= 40){
    //     cout<<"Yooung"<<endl;
    // }else{
    //     cout<<"Old"<<endl;
    // }

    // switch case

    int day;
    cin >> day;

    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thusday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}