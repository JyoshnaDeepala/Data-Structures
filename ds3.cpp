 #include<iostream>
 using namespace std;

 int main(){
    int a,b;
    cout<<"Enter 2 numbers to display prime numbers between them:";
    cin>>a>>b;

    for(int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){  //dont reinitialize here
            if(num%i==0){
                break;
            }
        }
        if(i==num){
            cout<<num<<endl;
        }
    }

    return 0;
 }