#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    int factorial=1;
    cout<<"enter number to find factorial "<<endl;
    cin>>num;
    int i=1;
    while(i<=num){factorial=factorial*i;
    i+=1; 
    }
    cout<<"factorial is"<<factorial;

    return 0;}