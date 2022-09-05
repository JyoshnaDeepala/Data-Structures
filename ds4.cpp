//hollow rectangle
#include<iostream>
using namespace std;

int main(){
    int row,column;
    cout<<">";
    cin>>row>>column;
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1||i==row){
                cout<<"* "; //i just added space coz it looks good on my output window
            }
            else if(j==1||j==column){
                cout<<"* "; //''
            }
            else{
                cout<<"  "; //''
            }
        }
        cout<<endl;
    }

    return 0;
}