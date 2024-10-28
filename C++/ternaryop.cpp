#include<iostream>
using namespace std;
int WinMain(){
    cout<<"enter first number "<<endl;
    int a;
    cin>>a;
    cout<<"enter second number "<<endl;
    int b;
    string check;
    cin>>b;


    a==b? check = "both numbers are equal" : check = "both numbers are not equal";

    cout<<check;

}