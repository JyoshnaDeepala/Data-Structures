//revrse an integer
//faileddddddddddddddddddd
#include<iostream>
using namespace std;
#include<string>

int main(){
    int n{};
    cin>>n;

    string s=to_string(n);
    string e;
    for(int i=0;i<s.size();i++){
         e=e+s[n-i]; //also tried append too,.at() mthod
    }

    cout<<stoi(e);
}

