#include<iostream>
using namespace std;
int main(){
    system("cls");
    string choice;
    int num1;
    cout<<"enter first number"<<endl;
    cin>>num1;
    int num2;
    cout<<"enter second number"<<endl;
    cin>>num2;
    cout<<"enter your Operation to perform"<<endl;
    cin>>choice;
    if(choice=="sum" || choice=="SUM" || choice=="Sum"|| choice=="+" || choice=="add" || choice=="ADD"||choice=="Add"){cout<<num1+num2;}
    else if(choice=="difference" || choice=="DIFFERENCE" || choice=="Difference"|| choice=="-" || choice=="subtract" || choice=="SUBTRACT"||choice=="Subtract"){
        if(num1>=num2){cout<<num1-num2;}
        if(num1<=num2){cout<<"negative  "<<num2-num1;}
    }
    else if(choice=="product" || choice=="PRODUCT" || choice=="Product"|| choice=="*" || choice=="x"|| choice=="X"|| choice=="multiply" || choice=="MULTIPLY"||choice=="Multiply"){cout<<num1*num2;}
    else if(choice=="quotient" || choice=="QUOTIENT" || choice=="Quotient"|| choice=="/" || choice=="divide" || choice=="DIVIDE"||choice=="Divide"){cout<<num1/num2;}
    else{cout<<"unidentified operator detected"<<endl;}
    return 0;
}


