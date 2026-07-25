#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

void recursiveInsertionSort(vector<int> &nums, int n){
    if(n<=1) return;

    recursiveInsertionSort(nums,n-1);

        int j = n - 1;
        while(j>0 && nums[j-1]>nums[j]){
            swap(nums[j],nums[j-1]);
            j--;
        }
}

vector<int> insertionSort(vector<int>& nums) {
        recursiveInsertionSort(nums,nums.size());
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
    
    solver.insertionSort(nums);
    
    cout << "Sorted array:   ";
    for(int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
