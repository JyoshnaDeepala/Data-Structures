//prime or not 
#include<iostream>
using namespace std;


int main() {
int num{};
cout<<"enter a number for displaying prime numbers upto that number:";
cin>>num;
int i{};

for(i=2;i<=num;i++){
    int ctr{};   
    for(ctr=2;ctr<i;ctr++){
        if(i%ctr==0){
            break;
        } 
    }
    if(ctr==i){
        cout<<i<<endl;
    }
   }
  return 0;
}