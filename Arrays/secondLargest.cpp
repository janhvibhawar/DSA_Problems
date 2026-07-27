#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &nums){
    int largest = nums[0];
    int slargest = -1;

    for(int i=1; i<nums.size(); i++){
        if(nums[i] > largest){
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i]<largest && nums[i]>slargest){
            slargest = nums[i];
        }
    }
    return slargest;
}

int main(){
    vector<int> nums = {4, 55, 38, 1, 10, 55};
    
    int result = secondLargest(nums);

    cout << result;

    return 0;
}