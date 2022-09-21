#include<iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int arr[n];
    cout<<"array plz :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    const int N=1000+2;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false; // or 0
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            check[arr[i]]=true; //or 1
        }
    }
    int ans=-1;
    for(int i=0;i<N;i++){
        if(check[i]==false){
            ans=i;
            break;
        }
    }
    cout<<ans;
    


return 0;
}