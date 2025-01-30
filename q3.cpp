#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter first number:";
    cin>>a;
    cout<<"enter second number:";
    cin>>b;
    cout<<"enter your choice: 1)add(+) 2)subtract(-) 3)divide(/) 4)multiply(*)";
    cin>>c;

    switch(c){
        case 1: cout<<a+b;
        break;
        case 2: cout<<a-b;
        break;
        case 3: cout<<a/b;
        break;
        case 4: cout<<a*b;
        break;
        default: cout<<"wrong choice";
    }
    return 0;
}
