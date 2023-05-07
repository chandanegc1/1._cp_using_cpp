#include<iostream>
using namespace std;
int main(){
    int N,x=1;
    cin>>N;
    while(N--){
        int n,total=1;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            total*=arr[i];
        }
        if(total%10 ==2 || total%10==5 || total%10==3){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
        return 0;
}