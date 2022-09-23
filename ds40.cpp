//searchig in matrix
#include<iostream>
using namespace std;

int main(){
    int n{};
    int m{};
    cin>>n>>m;
    int arr[n][m];
    int k{};
    cout<<"k:";
    cin>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==k){
                cout<<"found";
                cout<<"row:"<<i<<" column:"<<j;
                return 0;
            }
        }
    }
    cout<<"not found";

return 0;
}