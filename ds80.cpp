//all subsrings + ascci values
#include<iostream>
using namespace std;

void sub(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code= ch;
    string ros=s.substr(1);
    sub(ros,ans);
    sub(ros,ans+ch);
    sub(ros,ans+to_string(code));

}
int main(){
    sub("AB","");

    return 0;

}