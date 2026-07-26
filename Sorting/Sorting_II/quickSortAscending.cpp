#include<bits/stdc++.h>
using namespace std;

int pivot(vector<int> &nums, int low, int high){
    int pivotValue = nums[low];
    int i = low;
    int j = high;

    while(i < j){
        while(nums[i]<=pivotValue && i <= high - 1){
            i++;
        }

        while(nums[j]>pivotValue && j >= low + 1){
            j--;
        }

        if(i<j){
            swap(nums[i],nums[j]);
        }
    }
    swap(nums[low],nums[j]);
    return j;
}

void quickS(vector<int> &nums,int low, int high){
    if(low < high){
        int pivotIndex = pivot(nums,low,high);
        quickS(nums, low, pivotIndex-1);
        quickS(nums, pivotIndex+1, high);
    }
}


vector<int> quickSort(vector<int> &nums){
    quickS(nums,0,nums.size()-1);
    return nums;
}

int main() {
    // Test Case 1: Unsorted array with duplicates
    vector<int> arr1 = {4, 6, 2, 5, 7, 9, 1, 3, 2, 8};
    
    cout << "Original Array: ";
    for(int x : arr1) cout << x << " ";
    cout << endl;

    // Call the sorting function
    quickSort(arr1);

    cout << "Sorted Array:   ";
    for(int x : arr1) cout << x << " ";
    cout << endl;

    return 0;
}