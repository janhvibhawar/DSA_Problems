#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target){
    map<int,int> mpp;
    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int moreNeeded = target - num;

        if(mpp.find(moreNeeded)!=mpp.end()){
            return {mpp[moreNeeded], i};
        }

        mpp[num] = i;
    }
    return{-1, -1};
}



int main(){
    vector<int> nums = {3,6,10,2,3,9,0};
    int target = 12;

    vector<int> result = twoSum(nums, target);

    for(auto x : result){
        cout << x << " " ;
    }
    return 0;
}