#include<bits/stdc++.h>
using namespace std;


class Solution{
public:

vector<int> unionArray(vector<int> &num1, vector<int> &num2){
    int n1 = num1.size();
    int n2 = num2.size();

    int i=0;
    int j=0;

    vector<int> unionArr;


    while(i<n1 && j<n2){
        if(num1[i]<=num2[j]){
            if(unionArr.size()==0 || unionArr.back()!=num1[i]){
                unionArr.push_back(num1[i]);
            }
            i++;
        }else{
             if(unionArr.size()==0 || unionArr.back()!=num2[j]){
                unionArr.push_back(num2[j]);
            }
            j++;
        }
    }

    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=num1[i]){
                unionArr.push_back(num1[i]);
            }
            i++;
    }


    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=num2[j]){
                unionArr.push_back(num2[j]);
            }
            j++;
    }

    return unionArr;
}
};
