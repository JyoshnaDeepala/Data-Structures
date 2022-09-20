//bubble sort sorting in array
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
    int counter{1};
    while(counter<n){  //while loop runs for n-1 times
        for(int i=0;i<n-counter;i++){  //for loops run for n-1 while fist run of while
            if(arr[i]>arr[i+1]){    //in 2nd run of while, for loop runs n-2 times
                int temp=arr[i];    
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
     

    return 0;
}