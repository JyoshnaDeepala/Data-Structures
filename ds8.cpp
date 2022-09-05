//armstrong number or not
#include<iostream>
using namespace std;

int main(){
    int a{};
    cin>>a;
    int cpy=a;
    int cpy2=a;
    int b=0;
    int total{};
    
    while(a>0){  //coz for 4 digit number,we multiply 4 times
        a=a/10; //for 3 digit ,3 times.
        b++;       //we are counting number of digits to store in b    
    }        
        
 
    while(cpy>0){
        int last=cpy%10;
        int pup=1;
        for(int i=1;i<=b;i++){ //multiply b times
            pup=pup*last;
        }
        total+=pup;
        cpy=cpy/10;
    }
     
    if(total==cpy2 && cpy2!=0){
        cout<<"it is armstrong number";
    }else{
        cout<<"NO";
    }
    
    return 0;
    
}