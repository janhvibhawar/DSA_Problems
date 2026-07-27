#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &nums){
    int largest = nums[0];
    for(int i=1; i<=nums.size()-1; i++){
        if(largest < nums[i]){
            largest = nums[i];
        }
    }
    return largest;
}

int main(){
    vector<int> nums = {4, 5, 8, 1, 10, 55};
    
    int result = largestElement(nums);

    cout << result;

    return 0;
}