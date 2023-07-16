////////////////////////////////yyyyyyy----solved ;)  ..just added str+"3.14" in 11 line.
#include<iostream>
using namespace std;

string remov(string s){
    if(s.length()>0){
        char ch=s[0];
        string str="";
        if(s[0]=='p' && (s[1]=='i')){
            string str=remov(s.substr(2));
            return "3.14"+str;
            
        }else{
            
            string str=remov(s.substr(1));
            return ch+str;
            
        }
        
    }
    return "";
}

int main(){
    cout<<remov(" hpipj");

    return 0;
}
