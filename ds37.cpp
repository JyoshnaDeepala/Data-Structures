//pair sum problem
#include<iostream>
using namespace std;

bool pairn(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==k){
                cout<<i<<" "<<j <<endl;
                return true;
            }
        }
    }
    return false;
}

int main(){
    int arr[]={2,4,7,11,14,16,20,21};
 
    int k=31;
    cout<<pairn(arr,8,k);
    return 0;
}