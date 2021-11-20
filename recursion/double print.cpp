using namespace std;
void print(int n){
    if(n==1){
        cout<<"1"<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    print(n-1);
    
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    print(n);
}
