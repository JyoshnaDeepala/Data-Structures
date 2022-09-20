//pythogorian triplet
#include<iostream>
#include<cmath>
using namespace std;

int main(){
     int num1{},num2{},num3{};
     cout<<"enter 3 integers to check if they form a pythogorian triplet:";
     cin>>num1>>num2>>num3;//not comma here.
     if(pow(num1,2)==pow(num2,2)+pow(num3,2))  {
        cout<<"it is pythogorian triplet."<<endl;
     }
     else if(pow(num2,2)==pow(num1,2)+pow(num3,2))  {
        cout<<"it is pythogorian triplet."<<endl;
     }
     else if(pow(num3,2)==pow(num2,2)+pow(num1,2))  {
        cout<<"it is pythogorian triplet."<<endl;
     }
     else{
    
        cout<<"it is not a pythogorian triplet."<<endl;
     }
    cout<<<<endl;
     /* or
     can use max(a,b) so soo */

return 0;
}
