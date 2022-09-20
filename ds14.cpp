//adding 2 binary digits (a bit buggy)
#include<iostream>
using namespace std;

//reverse function
int reverse(int n){
    int ans=0;
    while(n>0){
        int lastdigit=n%10;
        ans=ans*10+lastdigit;
        n/=10;
    }
    return ans;
}


int addbinary(int a,int b){
    int ans=0;
    int prevcarry=0;

    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+prevcarry;
            prevcarry=0;
        }
        else if((a%2==0 && b%2 ==1) || (a%2==1 && b%2==0)){
            if(prevcarry==1){
                ans=ans*10+0;
                prevcarry =1;
            }
            else{
                ans=ans*10+1;
                prevcarry=0;
            }
        }
        else{
            ans = ans*10+prevcarry;
            prevcarry=1;

        }

        a/=10;
        b/=10;
    }

    //if a have more numbers
    while(a>0){
        if(prevcarry==1){
            ans=ans*10+0;
            prevcarry=1;
        }
        else{
            ans =ans*10+1;
            prevcarry=0;
        }
    }
    while (a>0)
    {
        if(prevcarry==1){
            if(a%2==1){
                ans=ans*10+0;
                prevcarry=1;
            }
            else{
                ans=ans*10+1;
                prevcarry=0;
            }
        }
        else{
            ans=ans*10 +(a%2);
        }
        a/=10;
    }
    //if be remained 
    while(b>0){
        if(prevcarry==1){
            ans=ans*10+0;
            prevcarry=1;
        }
        else{
            ans =ans*10+1;
            prevcarry=0;
        }
    }
    while (b>0)
    {
        if(prevcarry==1){
            if(b%2==1){
                ans=ans*10+0;
                prevcarry=1;
            }
            else{
                ans=ans*10+1;
                prevcarry=0;
            }
        }
        else{
            ans=ans*10 +(b%2);
        }
        b/=10;
    }
    //if carry remained
    if(prevcarry==1){
        ans=ans*10 +1;
    }
    ans=reverse(ans);

    return ans;
}




int32_t main(){
    int a,b;
    cin>>a>>b;

    cout<<addbinary(a,b)<<endl;
}