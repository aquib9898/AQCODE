#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> myVector = {1,2,3,4,5};
    for (auto i : myVector){
        cout<<i<<endl;
    }
}