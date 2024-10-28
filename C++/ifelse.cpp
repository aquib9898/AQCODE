#include<iostream>
using namespace std;
int main(){
    int num1;
    int num2;
    int num3;
    cout<<"enter the first number ";
    cin>>num1;
    cout<<endl<<"enter second number ";
    cin>>num2;
    cout<<endl<<"enter third number ";
    cin>>num3;
    cout<<endl;
     if(num1>num2 && num1>num3){cout<<num1<<" is the largest";}
     else if(num2>num1 && num2>num3){cout<<num2<<" is the largest";}
     else if(num3>num1 && num3>num2){cout<<num3<<" is the largest";}
    return 0;
}