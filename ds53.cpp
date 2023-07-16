//convert uppercase AND lowr case
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str="sfsDHFDkshiaDFBVSJFfke";
    //convert into upper case
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }
    }
    cout<<str<<endl;
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;
    //INBUILD
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str;

 return 0;   
}