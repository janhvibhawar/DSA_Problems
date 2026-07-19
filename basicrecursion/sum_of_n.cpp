#include<iostream>
using namespace std;


int NumbersSum(int n){
    if(n<=0) return 0;
    return n + NumbersSum(n-1);
}


int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The sum is:"<<NumbersSum(n)<<endl;
    return 0;
}