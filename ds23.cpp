//no of elements in largest arthimatic array possible
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"send array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int pd =arr[1]-arr[0];
    int curr{2};
    int ans{2};
    int i=2;
    while(i<n){
       
        if(pd==arr[i]-arr[i-1]){
            curr++;
            
        }else {
            pd=arr[i]-arr[i-1];
            curr=2;
        }
        ans=max(ans,curr);
        i++;
    }
    cout<<ans<<endl;
    return 0;
}