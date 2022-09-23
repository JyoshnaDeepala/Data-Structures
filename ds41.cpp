//buggy
//piral order matrix traversal
#include<iostream>
using namespace std;

int main(){
    int n{};
    int m{};
    cin>>n>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int srow=0,erow=n-1,scol=0,ecol=m-1;

    while(srow<=erow && ecol>=scol){
        for(int col=scol;col<=ecol;col++){
           cout<<arr[srow][col]<<" "; 
        }
        srow++;
        cout<<endl;
        for(int  row=srow;row<=erow;row++){
           cout<<arr[row][ecol]<<" "; 
        }
        cout<<endl;
        ecol--;
        for(int col=ecol;col>=scol;col--){
            cout<<arr[erow][col]<<" ";
        }
        erow--;
        cout<<endl;
        for(int row=erow;row>=srow;row--){
            cout<<arr[row][scol]<<" ";
        scol++;
        }
        cout<<endl;


    }

 
     
    return 0;
}