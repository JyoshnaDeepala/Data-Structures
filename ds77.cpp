//remove duplicates in string
#include <bits/stdc++.h>
using namespace std;
void new_str(string s, vector<char> ans){
    if(s.length()==0) return;

    if (find(ans.begin(), ans.end(), s[0]) != ans.end()) {
        new_str(s.substr(1), ans);
    }
    else {
        cout << s[0];
        ans.push_back(s[0]);
        new_str(s.substr(1), ans);
    }
}
int main(){
    string s;
    cin >> s;
    vector<char> ans;
    new_str(s, ans);
    return 0;
}