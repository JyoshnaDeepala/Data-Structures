//searching in sorted matrix
#include<iostream>
using namespace std;

int main(){
    int n{};
    int m{};
    cin>>n>>m;
    int mat[n][m];
    int k{};
    cout<<"k:";
    cin>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    int r=0,c=m-1;

    while(r<n and c>=0){
        if(mat[r][c]==k){
           cout<<"found at "<<r<<" "<<c;
           return 0;
        }
        if(mat[r][c]>k){
            c--;
        }else{
            r++;
        }
    }
    cout<<"not found";

return 0;
}