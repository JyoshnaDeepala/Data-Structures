//number reverser in all int
// does good with last zeroes and every other numbers, but we put 0 at start :(
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int counter{0};
    int reverse=0;
    while(n>0){
        int lastdigit=n%10;
        reverse = reverse*10 + lastdigit;
        n=n/10;
        counter++;
         
    }
     

    if(n%10==0){
        cout<<setw(counter)<<setfill('0')<<reverse;
    
    }
    else{
        cout<<reverse;
    }
}