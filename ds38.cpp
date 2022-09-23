//pair sum problem when array is sorted
#include<iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"k:";
    cin>>k;
    int low=0;
    int high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==k){
            cout<<low<<" "<<high<<endl;
            return 0;
        }else if(arr[low]+arr[high]>k){
            high--;
        }else if(arr[low]+arr[high]<k){
            low++;
        }
    } 
return 0;
}