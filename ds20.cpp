//insertion sort sorting in array
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    cout<<"unsorted array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i]; //current is not a copy as these are arrays
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int i{0};i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}