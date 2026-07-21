#include<bits/stdc++.h>

using namespace std;

class Solution{
public:
int mostFrequentElement(vector<int>&myList){
    unordered_map<int,int> myMap;

    for(int num : myList){
        myMap[num]++;
    }

    int max_element = myList[0];
    int max_freq = -1;

    for (auto const& pair : myMap) {
            int current_element = pair.first;
            int current_freq = pair.second;

            if(current_freq>max_freq){
                max_element = current_element;
                max_freq = current_freq;
            }else if(max_freq == current_freq){
                if(current_element<max_element){
                    max_element = current_element;
                }
            }
    }
     return max_element;
    }
};

int main(){
   vector<int> nums = {4, 4, 4, 5, 5, 6 , 6 , 6, 6};

    Solution solver;

    int result = solver.mostFrequentElement(nums);

    cout << "Result: " << result << "\n";

    return 0;
}
