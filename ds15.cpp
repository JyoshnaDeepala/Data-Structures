//finding min max in array
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"array int count:";
    cin>>n;
    int arra[n]{0};
    for(int i=0;i<n;i++){
        cin>>arra[i];
    
    }

    int maxx=INT16_MIN;
    int minn=INT16_MAX;

    for(int j :arra){
        maxx=max(maxx, j);
        minn=min(minn, j);
    }

    cout<<maxx<<" is max."<<endl;
    cout<<minn<<" is min."<<endl;
     
    return 0;
}
/*int main(){
     string s="";
    cin>>s;
    char min=s[0];
    char max=s[0];
    for(int i=0;i<s.length();i++){
        if(s[i]>max){
            max=s[i];
        }
        if(s[i]<min){
            min=s[i];
        }
    }
    cout<<min<<" "<<max<<endl;

} */