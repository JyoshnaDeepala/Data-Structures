// kadanes algo(original) :)
//for max sub array

#include<iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int currmax{},maxsum=INT16_MIN;
    for(int i=0;i<n;i++){
        currmax=currmax+arr[i];
        if(currmax> maxsum){
            maxsum=currmax;
        }
        if(currmax<0){
            currmax=0;
        }
    }
    cout<<maxsum;

    return 0;
}
  