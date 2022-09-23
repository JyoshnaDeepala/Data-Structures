//* maximum  circular subarray sum (kadanes)
//revise again.
#include<iostream>
using namespace std;

int main(){
    int n{};
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    // Corner Case
    if (n == 1)
        return a[0];
    int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
 
    int curr_max = a[0];
    int max_so_far = a[0];
    int curr_min = a[0];
    int min_so_far = a[0];
    for (int i = 1; i < n; i++) {
        // Kadane's Algorithm to find Maximum subarray sum.
        curr_max = max(curr_max + a[i], a[i]);
        max_so_far = max(max_so_far, curr_max);
 
        // Kadane's Algorithm to find Minimum subarray sum.
        curr_min = min(curr_min + a[i], a[i]);
        min_so_far = min(min_so_far, curr_min);
    }
 
    if (min_so_far == sum){
        cout<< max_so_far;
        return 0;
    }
    // returning the maximum value
    cout<< max(max_so_far, sum - min_so_far);
    
  

    return 0;
}