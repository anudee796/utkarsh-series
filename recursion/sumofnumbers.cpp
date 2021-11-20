#include<iostream>
using namespace std;
int numsum(int n){
    if(n==0){
        return 0;
    }else{
        return n+numsum(n-1);
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sum=numsum(n);
    cout<<"sum is "<<sum<<endl;
}
