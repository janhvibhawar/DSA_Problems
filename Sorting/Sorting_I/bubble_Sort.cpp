#include<bits/stdc++.h>
using namespace std;

vector<int>bubbleSort(vector<int> & nums){
    for(int i=nums.size()-1; i>=1; i--){
        for(int j=0; j<=i-1; j++){
            if(nums[j]>nums[j+1]) swap(nums[j],nums[j+1]);
        }
    }
    return nums;
}


int main(){
    vector<int> nums = {15,79,31,3,2,0,11,10};
    vector<int> result = bubbleSort(nums);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}