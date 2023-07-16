//remove adjacent duplicates from the string usng recursion
 
#include<iostream>
using namespace std;

string remov(string s){
    if(s.length()==0){
        return"";
    }
    char ch=s[0];
    string ans=remov(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;

}

int main(){
    cout<<remov("aaabbbaaabbbaaabbbcccddcddccdd");

    return 0;
}
