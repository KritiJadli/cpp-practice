#include<iostream>
using namespace std;
//printing the square of numbers
int sqNum(int num){
    int square=num*num;
    return square;
}
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    cout<<sqNum(n);

}