//frinds pairing problem
#include<iostream>
using namespace std;
int friendparing(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    return friendparing(n-1)+friendparing(n-2)*(n-1);
}

int main(){
    cout<<friendparing(4);

    return 0;
}