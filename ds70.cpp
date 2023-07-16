//array sorted or not using recursion
//increasing arra or not
#include<iostream>
using namespace std;

bool sorted(int arr[], int n){
    if(n==1){
        return true;
    }
    bool restarray=sorted(arr+1,n-1);//arr+1 makes point next element , n-1 size decrases
    return (arr[0]<arr[1]&& restarray);
}
int main(){
    int arr[]={5,6,8,9,10};
    cout<<sorted(arr,5);
    return 0;
}