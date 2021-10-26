Leetcode - Intersection of two arrays II
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> numbers1 ;
        unordered_map<int,int> numbers2 ;
        unordered_map<int,int> :: iterator itr;

        vector<int> result;
        for(int i=0;i<nums1.size();i++){
            numbers1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            numbers2[nums2[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            if(numbers1.find(nums2[i]) != numbers1.end() && numbers2.find(nums2[i])!= numbers2.end()){
                if(numbers1[nums2[i]] == 0 || numbers2[nums2[i]] == 0){
                    continue;
                }
                else{
                    result.push_back(nums2[i]);
                    numbers1[nums2[i]]--;
                    numbers2[nums2[i]]--;
                }
            }
        }
        return result;
    }
};
