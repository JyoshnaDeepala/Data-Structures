//fibonacci  
#include<iostream>
using namespace std;

int feb(int a){
    if(a==1 || a==0)
        return a;
    return feb(a-1)+feb(a-2);
    }

int main(){
    int a{};
    cout<<">";
    cin>>a;
    cout<<feb(a);

return 0;
 }
