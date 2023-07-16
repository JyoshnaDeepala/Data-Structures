//prime or not //sieve eratosthenes
#include<iostream>
using namespace std;


    void primesieve(int n){
        int prime[n]={0};

        for(int i=2;i<=n;i++){
            if(prime[i]==0){ //add (&& (long long)i*i<=n) to condition for optimization
                for(int j=i*i;j<=n;j+=i){
                    prime[j]=1;
                }
            }
        }

        for(int i=2;i<=n;i++){
            if(prime[i]==0){
                cout<<i<<" ";
            }
        }cout<<endl;
    }

int main(){
    int n;
    cin>>n;

    primesieve(n);

    return 0;
}
