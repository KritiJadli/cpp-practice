#include<iostream>
#include<cmath>
using namespace std;
int main(){
    //armstrong number
    int n;
    cout<<"enter a number";
    cin>>n;
    int dup=n;
    int count=0;
    int sum=0;
    while (dup!=0){
        int dup=dup/10;
        count=count+1;
    }
    dup=n;
    while(dup!=0){
        int digit=dup%10;
        int power=round(pow(digit,count));
        sum=sum+power;
        dup=dup/10;
    }
    if(sum==n){
        cout<<sum<<"is armstrong number"; 
    }
    else{
        cout<<sum<<"is not armstrong";
    }
}