#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    bool prime = true;
    int i;
    cout<<"enter a number to check if its a prime  "<<endl;
    cin>>num;
    if(num<=1){cout<<"number is not prime  ";}
    else{
        for(i=2;i<num;i+=1){
            if(num%i==0){prime=false;}else{(void)0;}
        }


    }
    if(prime==true){cout<<"number is a prime";}else{cout<<"number is not prime";}
}