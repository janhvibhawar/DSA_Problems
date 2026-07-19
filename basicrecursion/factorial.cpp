#include<iostream>
using namespace std;


int NumbersFactorial(int n){
    if(n<=0) return 1;
    return n * NumbersFactorial(n-1);
}


int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The factorial of number is:"<<NumbersFactorial(n)<<endl;
    return 0;
}