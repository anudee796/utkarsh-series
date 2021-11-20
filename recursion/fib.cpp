#include<iostream>
using namespace std;
int fib(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    cout<<"enter which in fibnocii is needed"<<endl;
    cin>>n;
    int sum=fib(n);
    cout<<n<<" element is: "<<sum;
}
