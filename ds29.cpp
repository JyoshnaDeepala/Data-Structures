//maximum sub array sum //brute force approach.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n{};
    cin>>n;
    int arr[n];
    cout<<"array plz :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=INT_MIN;//presents in climit

    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int currsum{0};
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                currsum+=arr[k];
                
            }sum=max(sum,currsum);
            cout<<endl;
        }
        cout<<endl;
    }
    cout<<"max sum is "<<sum<<endl;
    return 0;
}