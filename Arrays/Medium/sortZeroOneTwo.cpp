#include<bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int> &nums){
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){

    vector<int> nums = {2,2,0,0,1,1,1,1};
    sortZeroOneTwo(nums);

    for(auto x : nums){
        cout << x << " ";
    }
    return 0;
}