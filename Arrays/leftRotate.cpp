#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

void rotateArray(vector<int> &arr){
    int n = arr.size();

        int firstElement = arr[0];

        for(int j=0; j<n-1; j++){
            arr[j] = arr[j+1];
        }

        arr[n-1] = firstElement;
}

};
