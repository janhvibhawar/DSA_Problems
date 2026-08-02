#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> &nums){
   for(int i=0; i<nums.size()-1; i++){
    if(nums[i]>nums[i+1]){
        return false;
    }
   }
   return true;
}

int main(){
    vector<int> nums = {1 , 3 , 7 , 10};
    
    bool result = isSorted(nums);

    cout << result;

    return 0;
}