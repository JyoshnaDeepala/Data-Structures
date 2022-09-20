//conversions  // 
#include <bits/stdc++.h>
using namespace std;

int binarytodecimal(int n){
    int ans{};
    int x{1};
    while(n>0){
        int y=n%10;
        if(y>1){
            cout<<"its not a binary number:";
            return 0;
        }
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}

int octaltodecimal(int n){
    int ans{};
    int x{1};
    while(n>0){
        int y=n%10;
        if(y>7){
            cout<<"its not a octal number:";
            return 0;
        }
        ans+=x*y;
        x*=8;
        n/=10;
    }
    return ans;
}
 
int hexadecimaltodecimal(string n){ //if only u enter cap letters in cin
    int ans=0;
    int x=1;

    int s=n.size();
    for(int i=s-1;i>=0;i--){
        if(n[i]>='0' && n[i]<='9') //ascii camparison maybe
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i]>='A' && n[i]<='F')//givrs error if u put"F"
        {                               //in c++ strings and char are diff
            ans += x*(n[i]-'A'+10);
        }
        x*=16;
    }
    return ans;
}

int decimaltobinary(int n){
    int x=1;
    int ans=0;
    while(x<=n)
        x*=2;
    x/=2;

    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=2;
        ans =ans*10+lastdigit;
    }
    return ans;
}

int decimaltooctal(int n){
    int x=1;
    int ans=0;
    while(x<=n)
        x*=8;
    x/=8;

    while(x>0){
        int lastdigit=n/x;
        n-=lastdigit*x;
        x/=8;
        ans =ans*10+lastdigit;
    }
    return ans;
}

string decimaltohexadecimal(int n){
    int x=1;
    string ans="";
    while(x<=n)
        x*=16;
    x/=16;

    while(x>0)
    {
        int lastdigit =n/x;
        n-=lastdigit *x;
        x/=16;
         if (lastdigit <=9)
            ans=ans+to_string(lastdigit);
        else{
            char c='A'+lastdigit -10;
            ans.push_back(c);
        }    
    }
    return ans;
}

int32_t main(){  //large standerds than normal int which is 4bytes(16 bit).
                 //it can handle 32 bit too.
    int n;
    string m;
    cin>>n;
//    cin>>n;
//    cout<<binarytodecimal(n)<<endl;
    cout<< decimaltohexadecimal(n)<<endl;

}
 

