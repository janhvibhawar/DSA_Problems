#include<bits/stdc++.h>;
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        for(int i=0; i<=nums.size()-2; i++){
            int j = i;
            while(j>0 && nums[j]> nums[j-1]){
                swap(nums[j],nums[j-1]);
                j--;
            }
        }

        return nums[nums.size()/2];
    }
};