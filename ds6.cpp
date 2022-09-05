//floyd pyramid
#include<iostream>
using namespace std;

int main(){
    int n{};
    cout<<">";
    cin>>n;
    int count{1};

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }
}