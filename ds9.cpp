//factoral 
#include<iostream>
using namespace std;

int fact(int a){
    if(a==0){
        return 1;
    }
         
    return a*fact(a-1);
}
int main(){
    int a{};
    cout<<">";
    cin>>a;
    cout<<fact(a);

    return 0;
}
