//leap year
#include<iostream>
using namespace std;
/*void leapyear(int year){
    if(year%4==0 && year%100!=0 || year%400==0){
        cout<<"leap year";
    }
    else{
        cout<<"not a leap year";
    }
}

int main(){
    int n;
    cout<<"enter a value";
    cin>>n;
    leapyear(n);
   

}*/
//prime number
int prime(int num){
    int count=0;
    for(int i=1;i*i<num;i++){
        if(num%i==0){
            count++;
            if((num/i)!=i){
                count++;
            }
        }
        if(count==2){
            cout<<"prime";
        } 
        else cout<<"not prime";
    }
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<prime(n);
}

