#include<iostream>
using namespace std;

void fun(int &nums){
    cout<<nums; //23
    cout<<&nums<<endl;//ff0c

}

int main(){
    int abb{23};
    cout<<&abb<<endl;//ff0c
    fun(abb);
    return 0;
}