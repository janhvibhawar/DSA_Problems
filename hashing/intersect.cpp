#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> finalresult;
        int hash[1001] = {0}; 

        for(int i = 0; i < nums1.size(); i++){
            hash[nums1[i]]++;
        }

        for(int i = 0; i < nums2.size(); i++){
            if(hash[nums2[i]] >= 1){
                finalresult.push_back(nums2[i]);
                hash[nums2[i]]--;
            }
        }
        return finalresult;
    }
};

int main() {
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    Solution solver;
    vector<int> result = solver.intersect(nums1, nums2);

    cout << "Intersection Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}
