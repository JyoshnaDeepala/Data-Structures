//linear search in array
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key){
    int idx(-1);
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            idx=i;
            break;
        }

    }
    return idx;
}

int main(){
   int n;
   cout<<"size bro:";
   cin>>n;
   int arr[n];
   cout<<"Elements plz:";
   for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    int key;
    cout<<"Enter key:";
    cin>>key;

    int idx=linearsearch( arr,n,key);

    if(idx==-1){
        cout<<"key is not in the list";
    }else{
        cout<<"index is "<<idx<<endl;
    }


   return 0;
}