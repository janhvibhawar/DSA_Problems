#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

void drotate(vector<int> & arr, int k){
    int n = arr.size();
    if(n<=-1) return;

    k = k % n;

    reverse(arr.begin(), arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    
}
};