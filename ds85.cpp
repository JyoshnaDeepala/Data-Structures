//placing a 2*1 tile on 2*n board,number of ways
//problem doesnt make sense.
//makes sense if we send n+1 value into function call.
#include<iostream>
using namespace std;

int tiling(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    return tiling(n-1)+tiling(n-2);
}

int main(){
    cout<<tiling(5);

    return 0; 
}