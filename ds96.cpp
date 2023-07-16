//count sort//buggy
#include<iostream>
using namespace std;

void countsort(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[k+1]={0} ;//puting 10 size,not allocating dynamically 
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];

    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
    int arr[6]={3,45,-90,2,0,-90};
    countsort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}