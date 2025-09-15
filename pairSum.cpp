#include<iostream>
#include<vector>
using namespace std;
//print idx number which sum matches with targer

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();// when sorted array case we are solving by 2 pointer approach

    for(int i=0; i<n; i++){ // in this whole loop we are going to use,
        for(int j=i+1; j<n; j++){ // after int n -> int i=0,j=n-1; while(i<j){int pairSum = nums[i]+nums[j];
            if(nums[i]+nums[j] == target){ // if (pairSum>target) j--; else if(pairSum<target) i++;
                ans.push_back(i); // else{ans.push_back(i); ans.push_back(j); return ans;} then after while loops paranthisis
                ans.push_back(j); // return ans;
                return ans;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    
    vector<int> ans = pairSum(nums,target);
    cout<< ans[0] << " , " <<ans[1] << endl;

    return 0;
}