#include<iostream>
using namespace std;
//for positive only  . sum,factorial,fibonacci,pow
int sum(int n){
    if(n==0){
        return 0;
    }

    int prev=sum(n-1);
    return n+prev;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int prev=fact(n-1);
    return n*prev;
}
int fib(int n){
    if(n==0 ||n==1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int pow(int n,int p){
    if(p==0){
        return 1;
    }
    int prev=pow(n,p-1);
    return n*prev;
}

int main(){
    int n{};
    cin>>n;

    cout<<sum(n)<<endl;
    cout<<fact(n)<<endl;
    cout<<fib(n)<<endl;
    int p{};
    cin>>p;

    cout<<pow(n,p);
}