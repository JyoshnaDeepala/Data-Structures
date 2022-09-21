//max till 1.
#include<iostream>
using namespace std;

int main(){
    int max=INT16_MIN;
    int n;
    cin>>n;
    int arr[n];
    cout<<"send array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter{0};
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            counter++;
        }
        cout<<"max till point is:"<<max<<",   no of times record beated:"<<counter<<endl;
    }
}