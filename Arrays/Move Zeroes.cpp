Leetcode - Move Zeroes

//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

// Note that you must do this in-place without making a copy of the array.

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int size = nums.size();
        int temp;
        
        while(j<size && i<size){
            if(nums[i] == 0){
                while(j<size && nums[j] == 0){
                    j++;
                }
                if(j>=size) break;
                // replace
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                
                i++;
                j++;
                
            } else {
                i++;
                j = i + 1;
            }
            
        }
    }
};