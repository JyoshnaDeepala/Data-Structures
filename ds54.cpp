//form the biggst number from numeric string
//sort in  decreasing order.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str{};
    cin>>str;
     
    sort(str.begin(),str.end(),greater<int>());

    cout<<str<<endl;

 return 0;   
}