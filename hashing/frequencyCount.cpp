#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> frequencyCount(vector<int> &nums){

    unordered_map<int,int> finalMap;

    for(int num : nums){
        finalMap[num]++;
    }

    vector<vector<int>> finalresult;
    for (auto const& pair : finalMap) {
        finalresult.push_back({pair.first, pair.second});
    }
    return finalresult;
}

int main(){
    vector<int> nums; 
    int n, value;
    
    cout << "Enter the number of elements: ";
    cin >> n;
    
    cout << "Enter the numbers:\n";
    
    for(int i = 0; i < n; i++){
        cin >> value;
        nums.push_back(value); 
    }
    
    vector<vector<int>> result = frequencyCount(nums);
    cout << "\nUnique element frequencies:\n";
    for(auto const& pair : result) {
        cout << pair[0] << " occurs " << pair[1] << " times\n";
    }
    
    return 0;
}
