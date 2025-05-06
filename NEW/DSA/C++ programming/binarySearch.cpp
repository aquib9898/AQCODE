#include<iostream>
using namespace std;
int main(){
    int arr[50],size,search,i,j,first,last,middle,steps;
    bool flag;
    cout<<"enter size of array ";
    cin>>size;
    cout<<"enter elements in ascending order 01    ";
    cin>>arr[0];
    for(i=1;i<size;i++){
        cout<<"enter element in ascending order   "<<i+1<<"  ";
        cin>>arr[i];
        if(arr[i]<arr[i-1]){cout<<"element not in ascending order, re-enter element  ";
            i--;}
    }

    cout<<"enter element to search";
    cin>>search;
    first=0;
    last=size-1;
  
    j=1;
    flag=false;
    while(flag==false){
        middle=(first+last)/2;
        if(arr[middle]==search){cout<<"number found at "<< middle << "attempts taken "<<j;
        flag=true;}
         else if (search<arr[middle]){
            last=middle-1;
            j++;
        }

        else if(search>arr[middle]){first=middle+1;
        j++;}
        else{cout<<"element not found";}
        }
    

        
    }


