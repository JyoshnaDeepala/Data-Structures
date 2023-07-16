//keypad 
#include<iostream>
using namespace std;
#include<string>

string keypadarr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz","*","-","#"};
void keyp(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadarr[ch -'0']; // getting value 2 from '2' for accesing 2nd index in array.then same with 3
    string ros=s.substr(1);

    for(int i=0;i<code.length();i++){
        keyp(ros,ans+code[i]);

    }
    
}
int main(){
    keyp("234","");

    return 0;
}