//max sub array//kadene's algorithm// big no
//th algo isnt considering about bigger values before and after nagatives
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currsum{};
    int maxsum=INT_MIN;

    for(int i=0;i<n;i++){
        currsum=+arr[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    cout<<maxsum<<endl;

    return 0;

}