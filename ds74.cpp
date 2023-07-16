//replacing pi with 3.14 
#include<iostream>
using namespace std;
#include<string>

string mov(string s){
    if(s.length()==0){
        return "";
    }
 
    if(s[0]=='p' && s[1]=='i'){
        string rest=mov(s.substr(2));
        rest="3.14"+rest;
        return rest;
    }
    else{
        string rest=mov(s.substr(1));
        rest=s[0]+rest;
        return rest;
    }
    
   
     
}


int main(){
    string d="figpidsmip9 ipip";
   string rt= mov(d);
   cout<<rt;
    return 0;
}