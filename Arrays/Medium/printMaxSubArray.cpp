#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums, int n){
    int sum = 0, maxi = INT_MIN;
    int start = 0, ansStart = 0, ansEnd = 0;

    for(int i=0; i<n; i++){
        if(sum==0){
            start = i;
        }
        sum+=nums[i];

        if(sum>maxi){
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if(sum<0){
            sum=0;
        }
    }

    cout << "The maximum subarray is: [ ";
    for(int k = ansStart; k <= ansEnd; k++){
        cout << nums[k] << " ";
    }
    cout << "]" << endl;
    return maxi;
}

int main(){
    vector<int> nums = {-4,-2,3,6,-8,1,2,-5};

    int n = nums.size();

    int result = maxSubArray(nums,n);

    cout << result;

    return 0;
}