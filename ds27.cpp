 #include<iostream>
 using namespace std;

 int main(){ 
    int n{};
    cin>>n;
    int arr[n];
    cout<<"array plz :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    
    for(int i=0;i<n+1;i++){
        int j{0};
        while(j<n){
            if(i==arr[j]){

                break;
            }
            j++;
            if(j==n){
                cout<<i<<" ";
                return 0;
                
            }
            
        }

    }

return 0;
 }