#include<iostream>
#include<vector>
using namespace std;

int Rbinary(vector<int> &arr, int tar){
    
    int st=0, end=arr.size()-1;
    while(st<=end){
    int mid= st +(end-st)/2;

    if(arr[mid]==tar){cout<<"target found at "<<mid;
    }else{
        if(arr[st]<=arr[mid]){
            if(arr[st]<=tar<mid){end=mid-1;}
        }else{st=mid+1;}
    }
}
}