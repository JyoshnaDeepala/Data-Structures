//count no of 1s in binary representation
#include<iostream>
using namespace std;

int numberofones(int n){
    int count=0;
    while(n){ //runs untill n becomes 0 
        n=n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<numberofones(19)<<endl;
    return 0;
}