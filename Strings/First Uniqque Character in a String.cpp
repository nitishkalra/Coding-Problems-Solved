// Leetcode - First Unique Character in a String

// Given a string s, find the first non-repeating character in it and return its index. If it does not exit, return -1

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> hm;
        int size = s.length();
        int i =0;
        while(i<size){
            hm[s[i]]++;
            i++;
        }
        i = 0;
        while(i<size){
            if(hm[s[i]] == 1) return i;
            i++;
        }
        return -1;
    }
};