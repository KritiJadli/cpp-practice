#include<iostream>
using namespace std;
int main(){
    //palindrome
   /* int n;
    cout<<"enter the number";
    cin>>n;
    int rev=0;
    int dup=n;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(dup==rev){
        cout<<"true";
    }
    else{
        cout<<"false";
    }*/
    //divisor
    int n;
    cout<<"enter the number";
    cin>>n;
    for(int i=1; i<=n;i++){
        if(n%i==0){
            cout<<" " <<i;
        }

    }
    return 0;
}