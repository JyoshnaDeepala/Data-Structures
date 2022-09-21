//pass by value
#include<iostream>
using namespace std;

void change(int a){
    a=a+a;
    cout<<a<<endl; // a is 200
}

int main(){
    int a{100};
    cout<<a<<endl;
    change(a);
    cout<<a<<endl;// a is 100 even after the change function
    //because that a is function variable and copy of this a.
    //just value of a is copied to that change function so original isnt changed.
    //that a is local to that function and dies after function is executed.
    //in stack main fuction gets place and change functions gets place above that. 
    //so main a have diff location and change a have diff location. 

    return 0;

}