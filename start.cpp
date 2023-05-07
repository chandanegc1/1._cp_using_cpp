// Input;- welcome to coding journey
// output: - 
// WELCOME
// TO
// CODING 
// JOURNEY 

#include<iostream>
using namespace std;
const int N = 1e7;
void getpart(string arr){
    for(int i =0; i<arr.size() ;i++ ){
        if(arr[i]<='z' && arr[i]>='a'){
            arr[i]=arr[i]-32;
        }
    }
    cout<<arr<<endl;
}

int main(){
    string arr;
    while(1){
    cin>>arr;
    getpart(arr);
    }
}