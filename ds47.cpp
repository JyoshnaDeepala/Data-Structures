//check palindrome
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin>>arr;
    
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            cout<<"its not a palindrom.";
            return 0;
        }
    }
    cout<<"its a palindrome.";

    return 0;
}