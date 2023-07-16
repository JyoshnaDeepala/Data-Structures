//reverse string using recursion
#include<iostream>
#include<string>
using namespace std;

string reverse(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string rest=reverse(s.substr(1));
    return rest+ch;
   
     
}
/*string P="";
string reverse(string s){
    if(s.size()>0){
    reverse(s.substr(1));
    P=P+s[0];
 
    }
 
return P;
} */

int main(){
    string rt=reverse("bondam"); 
    cout<<rt;
    return 0;
}