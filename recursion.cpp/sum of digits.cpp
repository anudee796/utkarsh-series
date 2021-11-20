#include<iostream>
using namespace std;
int digitsum(int n){
    if(n==0){
        return 0;
    }else{
        int last=n%10;
        int rem=n/10;
        return digitsum(rem)+last;
    }
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int sum=digitsum(n);
    cout<<"sum of digits is "<<sum;
    
}
