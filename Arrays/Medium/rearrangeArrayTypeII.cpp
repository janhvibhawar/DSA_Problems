#include<bits/stdc++.h>
using namespace std;

vector<int> arrangeNumbers(vector<int> arr, int n){
    vector<int> pos, neg;
    for(int i=0; i<n; i++){
        if(arr[i]>0){
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
    }

    if(pos.size() > neg.size()){
        for(int i = 0; i<neg.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        int index = neg.size() * 2;
        for(int i = neg.size(); i<pos.size(); i++){
            arr[index] = pos[i];
            index++;
        }
    }
    else{
        for(int i=0; i<pos.size(); i++){
            arr[2*i] = pos[i];
            arr[2*i+1] = neg[i];
        }

        int index = pos.size() * 2 ; 
        for(int i= pos.size(); i<neg.size(); i++){
            arr[index] = neg[i];
            index++;
        }
    }

    return arr;
}


int main(){
    vector<int> arr = {2,4,5,-1,-2,-6,9,7};
    int n = 8;

    vector<int> newarr = arrangeNumbers(arr,n);

    for(auto x : newarr){
        cout << x << " ";
    }

    return 0;
}