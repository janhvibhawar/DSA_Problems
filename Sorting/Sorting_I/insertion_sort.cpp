#include<bits/stdc++.h>
using namespace std;

vector<int>insertionSort(vector<int> & nums){
   for(int i=0; i<=nums.size()-1; i++){
    int j = i;
    while(j>0 && nums[j-1]>nums[j]){
        int temp = nums[j-1];
        nums[j-1] = nums[j];
        nums[j] = temp;
        j--;
    }
   }
    return nums;
}


int main(){
    vector<int> nums = {15,79,31,3,2,0,11,10};
    vector<int> result = insertionSort(nums);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}