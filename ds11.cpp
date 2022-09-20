// sum of n natural numbers
#include<iostream>
using namespace std;
 int main(){
    int num;
    cout<<">";
    cin>>num;
    if(num<=0){
        cout<<"thats not a natural number"; 
        return 0;//main ends here
    }
    cout<<(num*(num+1))/2;

    return 0;
 }
 