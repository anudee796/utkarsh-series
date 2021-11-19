#include<iostream>
using namespace std;
void hello(int n){  //10to1
    if(n>0){
        cout<<n<<"."<<"hello"<<endl;
        hello(n-1);
    }else{
        return;
    }
}
int main(){
    hello(10);
}
