//pass by value to change a variable
#include<iostream>
using namespace std;

int change(int a){
    a=a+a;
    cout<<a<<endl;
    return a;
}

int main(){
    int a{100};
    cout<<a<<endl;
    a=change(a); //just assigned the return value.( if return value is 11, then  a will be 11.) 
    cout<<a<<endl; //so here a is updated.
    return 0;

}