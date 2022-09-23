//max sub array //by some one on internet

#include<iostream>
using namespace std;
#include<climits>

int main()
{
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
      }
  
      int maxSum = INT_MIN;
      int sum = 0;
      
      for(int i=0;i<n;i++)
      {
         sum=0;
         for(int j =i;j<n;j++)
         {
             sum+=arr[j];
             maxSum = max(maxSum,sum);
         }
      }
      cout<<maxSum<<endl;
      return 0;
}