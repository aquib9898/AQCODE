#include<iostream>
using namespace std;
int main(){
    system("cls");
    int num;
    int factorial=1;



    
    int i;
    cout<<"enter number to find factorial  "<<endl;
    cin>>num;
    for(i=1; i<=num; i+=1){factorial*=i;}
    cout<<factorial;
    return 0; }