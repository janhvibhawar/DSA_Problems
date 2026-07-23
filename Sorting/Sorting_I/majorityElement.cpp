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

int main() {
    Solution solver;
    
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    
    int result = solver.majorityElement(nums);
    
    cout << "The majority element is: " << result << endl;
    
    return 0;
}