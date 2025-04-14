//prime number
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt=cnt+1;
            if ((n/i)!=i){
            cnt++;}
        }
        
    }
    if(cnt==2){
        cout<<"pime number";
    }
    else{
        cout<<"not prime";
    }

}
