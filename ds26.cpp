//sub array with given sum
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int s{};
    cin>>s;
    int arr[n];
    cout<<"array plz :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int i,j,currsum;
    for(i=0;i<n;i++){
        currsum=arr[i];
        for(j=i+1;j<n;j++){
            if(currsum==s){
                cout<<"sum is between index "<<i<<" and "<<j-1;
                return 0;
            }
            if(currsum>s || j==n){
                break;
            }
            currsum+=arr[j];
        }
    }
    cout << "No subarray found";
    return 0;


}
