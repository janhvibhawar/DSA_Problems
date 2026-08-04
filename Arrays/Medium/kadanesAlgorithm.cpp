#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums, int n){
    int sum = 0, maxi = INT_MIN;

    for(int i=0; i<n; i++){
        sum+=nums[i];

        if(sum>maxi){
            maxi = sum;
        }

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}

int main(){
    vector<int> nums = {-4,-2,3,6,-8,1,2,-5};

    int n = nums.size();

    int result = maxSubArray(nums,n);

    cout << result;

    return 0;
}