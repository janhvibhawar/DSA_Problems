#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

void recursionBubbleSort(vector<int> &nums, int n){
    if(n<=1) return;

    recursionBubbleSort(nums,n-1);

    int j = n - 1;
    while(j>0 && nums[j-1]>nums[j]){
        swap(nums[j],nums[j-1]);
        j--;
    }
}


vector<int> bubbleSort(vector<int> &nums){
    recursionBubbleSort(nums,nums.size());
    return nums;
}
};

int main(){
    Solution solver;
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};
    
    cout << "Original array: ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    solver.bubbleSort(nums);
    
    cout << "Sorted array:   ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
