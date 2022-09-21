//sums of sub arrays
#include<iostream>
using namespace std;

int main(){
 
    int n;
    cin>>n;
    int arr[n];
    cout<<"send array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int current{0};
    int sum{0};
    for(int i=0;i<n;i++){
        current=0;// fst outer  iteration- with inner itrations [0],then [0]+[1],then [0]+[1]+[2]..for each inner iteration
        // 2nd outer itreation-  [1], then [1]+[2],then [1]+[2]+[3] for each iteration.
        //3r outr-  [2], then [2]+[3],then [2]+[3]+[4] 
        for(int j{i};j<n;j++){
            current=current+arr[j];
            sum+=current;

        }
    }

    cout<<sum<<endl;

    return 0;
}