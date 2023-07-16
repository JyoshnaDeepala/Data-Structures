//char that occur most times
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str{};
    cin>>str;
    int freq[26];
    for(int i=0;i<26;i++)
        freq[i]=0;

    for(int i=0;i<str.size();i++)
        freq[str[i]-'a']++;

    char ans='a';
    int maxF=0;

    for(int i=0;i<26;i++){
        if(freq[i]>maxF){
            maxF=freq[i];
            ans=i+'a';  //for a ,a-a gives 0 as index
        }                //or b,b-a gives 1 as index
        
    }

    cout<<maxF<<" "<<ans<<endl;
     
     


 return 0;
}