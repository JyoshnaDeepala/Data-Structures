//tower of hanoi
#include<iostream>
//#include<string>
using namespace std;

void tower(int n,char scr,char dest,char helper){
    if(n>0){
        tower(n-1,scr,helper,dest);
        cout<<"move "<<n<<" from "<<scr<<" to "<<dest<<endl;
        tower(n-1,helper,dest,scr);
    }
}
int main(){
    tower(4,'A','C','B');

    return 0;
}
