#include<iostream>
using namespace std;
void print(int n){
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
        
        
    }
    cout<<endl;
    if(n==1){
        return;
    }else{
         print(n-1);
    }
   
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(n);
}
