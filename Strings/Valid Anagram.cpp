// Leetcode - Valid Anagram

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> hm;
        int size1 = s.length();
        int size2 = t.length();
        int i =0;
        
        while(i<size1){
            hm[s[i]]++;
            i++;
        }
        i = 0;
        while(i<size2){
            hm[t[i]]--;
            if(hm[t[i]]<0) return false;
            i++;
        }
        for (auto x : hm)
            if(x.second > 0) return false;
        return true;
    }
};
