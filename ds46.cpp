//char array from cpt
#include<iostream>
using namespace std;
int main(){
    char arr[50];
    cin>>arr;  //can use getline & have big line with spaces
    int i=0;
    while(arr[i]!='\0'){
        cout<<arr[i];

        i++;
    }

    return 0;
}