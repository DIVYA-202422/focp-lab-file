#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    float a,b;
    cout<<"enter a no.";
    cin>>a;
    cout<<"enter b no.";
    cin>>b;
    float c=a/b;
    cout<<fixed<<setprecision(2)<<c;

    return 0;
}
