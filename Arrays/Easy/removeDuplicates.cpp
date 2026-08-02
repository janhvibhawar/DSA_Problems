#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; 
        int i = 0;
        for(int j=1; j<nums.size(); j++){
            if(nums[j]!=nums[i]){
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;
    }
};

int main(){
    vector<int> nums = {1, 2, 2, 3, 3, 4, 5, 6};

    Solution solver;
    int uniqueCount = solver.removeDuplicates(nums);

    cout << "Unique elements count: " << uniqueCount << "\n";

    cout << "Modified vector up to unique size: ";
    for(int i = 0; i < uniqueCount; i++){
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
