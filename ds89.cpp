// all permutaions of n unique numbers,
#include<iostream>
using namespace std;
#include<vector>

vector<vector<int>>ans;
void permute(vector<int> a,int idx){
    if(idx== a.size()){
        ans.push_back(a);
        return;
    }
    for(int i= idx;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        
    }
 return;
}


int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a){ //here & is imp
        cin>>i;         //for(int i=0;i<n;i++){
    }                   //       cin>>a[i];}
                        
    permute(a,0);
    
    for(auto v:ans){
        for(auto i: v){    
            cout<<i<<" ";
        }cout<<endl;
    }

    return 0;
}