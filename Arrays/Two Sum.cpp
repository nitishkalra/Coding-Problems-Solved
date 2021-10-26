Leetcode - Two Sum

//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

//You can return the answer in any order.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hm;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            hm[nums[i]] = i;
        }
        for(int i=0;i<nums.size();i++){
            if(hm.find(target-nums[i])!=hm.end()){
                if(hm[target-nums[i]]==i) continue;
                result.push_back(i);
                result.push_back(hm[target-nums[i]]);
                break;
            }
        }
        return result;
    }
};