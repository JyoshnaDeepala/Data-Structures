//pair index problem

#include<iostream>
#include<vector>
#include <algorithm> //or else 'sort' was not declared in scope error.
using namespace std;

bool mycompare(pair<int,int>p1,pair<int,int>p2){
    return p1.first<p2.first;
}

int main(){
    int arr[]={10,16,7,14,5,3,12,9};
    vector<pair<int,int>>v; //vector of pairs
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        v.push_back(make_pair(arr[i],i));/* can do pair<int,int> p; p.first=arr[i]; p.second=i;*/

    }
    sort(v.begin(),v.end(),mycompare);

    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    for(int i=0;i<v.size();i++){
         cout<<arr[i]<<" ";
    }

    return 0;
}