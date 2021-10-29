// Leetcode - Longest Common Prefix

// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs[0].length() == 0 ) return "";
        if(strs.size() == 1) return strs[0];
        string lcp = strs[0];
        bool flag = false;
        int lcpindex = strs[0].length();
        
        for(int i=1;i<strs.size();i++){
            if(strs[i].length()==0) return "";
            int k = strs[i].length() < lcpindex ? strs[i].length() : lcpindex;
            for(int j=0;j<k;j++){
                if(strs[i][j] == lcp[j]){
                    lcpindex = j+1;
                } else{
                    if(j==0){
                        lcpindex = 0;
                        flag = true;
                    }
                    break;
                }
                
            }
            if(flag) break;
            
        }
        lcp = "";
        if(lcpindex > 0){
            for(int i=0;i<lcpindex;i++){
                lcp += strs[0][i];
            }
        }
        return lcp;
    }
};