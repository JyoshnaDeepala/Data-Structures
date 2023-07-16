//recursion ///[why is it not workin???]-------------solved ;)------forgot to put return statement on 12,17.
#include<iostream>
#include<cstring>
using namespace std;
string p="";
string replace(string s){
    if(s.length()>0){
        if(s[0]=='p' and s[1]=='i'){
            string li="3.14";
            p=p+li;
            string k=replace(s.substr(2));
            return k;
        }else{
            char d=s[0];
            p=p+d;  // doent work if we out append here
            string k=replace(s.substr(1));
            return k;
        }
    }
return p;
}
 
     



int main(){
    string d="figpidsmipipip";
   string rt= replace(d);
   cout<<rt;
    return 0;
}

 
 
