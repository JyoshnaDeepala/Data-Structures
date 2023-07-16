//all twice except one
#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];

    }
    return xorsum;
}

int main(){
    int arr[3]={2,2,3};
    cout<<unique(arr,3);
    return 0;
}