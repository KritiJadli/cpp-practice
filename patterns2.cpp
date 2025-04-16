#include<iostream>
#include<cmath>
using namespace std;
int main(){
       /*int n;
        cout<<"enter the number";
        cin>>n;
    for (int i=0;i<=n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int k=0;k<2*n-(2*i+1);k++){
            cout<<"*";
        }
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        cout<<endl;
    }*/
   int n;
   cout<<"enter the height";
   cin>>n;
   for(int i=1;i<=2*n-1;i++){
    int stars=i;
    if(i>n){
        stars=2*n-i;
    }
    for(int j=1;j<=stars;j++){
        cout<<"*";
    }
    cout<<endl;
   }



}