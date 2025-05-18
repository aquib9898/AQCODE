#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector <int> &arr,int tar){
    int st=0, end=arr.size()-1,k=0;
    
    while(st<=end){
        int mid= st+ (end-st)/2;
        if(arr[mid]==tar){cout<<"element found at "<<mid<<" after "<<k+1<<" steps"; return tar;
        }else if(arr[mid]<tar){st=mid+1; k++;
        }else if(arr[mid]>tar){end=mid-1; k++;
        }else{cout<<"element not found"; return -1;}
    }
}

int main(){vector <int> arr1={2,4,6,8,10,11,14,17,19,34,27,49};
int tar;
cout<<"enter target element   ";
cin>>tar;
binarySearch(arr1,tar);

}