//append in strings
#include<iostream>
#include<string>
using namespace std; 

int main(){
    string s1{"fam"};
    string s2{"ily"};

    s1.append(s2);
    cout<<s1<<endl;
    string s3="4";
    cout<<s3[0]-'0'+6;
    cout<<s3+4;
    
}