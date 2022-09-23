//what code is this? :?
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
    int currsum{0};
    for(int i=0;i<n;i++){
        currsum=0;
        for(int j=i;j<n;j++){
            currsum+=arr[j];
        }
        sum=max(sum,currsum);
    }

    cout<<sum;
return 0;
}