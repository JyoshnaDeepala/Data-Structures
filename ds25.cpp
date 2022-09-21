//first repesting element
#include<iostream>
using namespace std;

int main(){
    int n{};


    cin>>n;
    cout<<"array plz:";
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    } 

  //just creating big value
    const int N =100;//if 0s bigger  than 100000 gives error in this lappy
    int idx[N];  //make sure use 1 LAKH as big value
                          // in HR ide put 1e6+2
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }

    int minidx=INT16_MAX;
    for(int i=0;i<n;i++){
        if(idx[arr[i]] != -1){
            minidx=min(minidx,idx[arr[i]]);
        }
        else{
            idx[arr[i]]=i;
        }

    }
    if(minidx ==INT16_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<arr[minidx]<<" is repeating and fst index of it is at "<<minidx<<endl;
    }

    return 0;
}