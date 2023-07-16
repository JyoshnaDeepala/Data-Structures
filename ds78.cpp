//moving all x to end of string
#include<iostream>
using namespace std;
string mov(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=mov(s.substr(1));

    if(ch=='x'){
        return ans+ch;
    }else{
        return ch+ans;
    }
}

int main(){
    cout<<mov("xkdmsllaxkxjuxkojsldvkxx")<<endl;

    return 0;
}