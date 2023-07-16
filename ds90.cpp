//all permutations using stl and strings//can use stl for vec too
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cout<<"ENTER NUMBERS : ";
    cin>>s;
    vector<string> ans;
    sort(s.begin() , s.end());
    do
    {
        ans.push_back(s);
    }while(next_permutation(s.begin() , s.end()));
    cout<<"PERMUTATIONS ARE : \n";
    for(auto element : ans)
    {
        cout<<element<<" ";
    }
}
