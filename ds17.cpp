//binary rearch
//elements need to be sorted.
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
        }
        
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"key bhai:";
    cin>>key;

    int rslt=binarysearch(arr,n,key);
 
    if(rslt==-1){
        cout<<"nope,not there.";
    }else{
        cout<<rslt;
    }

    return 0;
}