#include<iostream>
using namespace std;

bool palindromeCheck(string &s, int n, int i){
    if(i>=n/2) return true;

    if(s[i]!=s[n-i-1]) return false;

    return palindromeCheck(s,n,i+1);
}


int main(){
   string s;
   cin>>s;
   int n = s.length();
   cout<< palindromeCheck(s,n,0);
   return 0;
}