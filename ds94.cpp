//quick sort
//also uses divide quanquor
 #include<iostream>
 using namespace std;

 void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
 }

 int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
 }

 void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
 }

 int main(){
    int arr[6]={3,45,-90,2,0,-90};
    quicksort(arr,0,5); //notice
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
 }