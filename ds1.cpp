//prime or not by me ;)
#include <iostream>
using namespace std;

 int main(){
    int val{};
    int ctr{};
    cout<<"Enter a number to check if it is prime:";
    cin>>val;
    ctr=val-1;
    while(ctr>=2){
        if (val%ctr==0){
            cout<<val<<" is Not prime"<<endl;
            break;
        }
        else if(ctr<=2){
            cout<<val<<" is a prime number"<<endl;
            break;}
        else
            ctr--;
        
    }
    if(val==2){
        cout<<"2 is a Prime number"<<endl;
    }
    if(val==1){
        cout<<"1 is neither prime nor composite"<<endl;
    }
    if(val<=0){
        cout<<"Nope, not by any chance."<<endl;
    }

} 

 