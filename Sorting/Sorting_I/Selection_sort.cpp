#include<bits/stdc++.h>
using namespace std;

vector<int>selectionSort(vector<int> & nums){
    for(int i=0; i<nums.size()-2; i++){
        int mini = i;
        for(int j=i; j<=nums.size()-1; j++){
            if(nums[j]<nums[mini]) mini = j;
        }
        int temp = nums[mini];
        nums[mini]=nums[i];
        nums[i]=temp;
    }
    return nums;
}


int main(){
    vector<int> nums = {5,9,1,3,10};
    vector<int> result = selectionSort(nums);
    for(int num : result){
        cout << num << " ";
    }
    return 0;
}