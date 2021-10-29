// Leetcode - Count and Say

// The count-and-say sequence is a sequence of digit strings defined by the recursive formula:

// countAndSay(1) = "1"
// countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.
// To determine how you "say" a digit string, split it into the minimal number of groups so that each group is a contiguous section all of the same character. Then for each group, say the number of characters, then say the character. To convert the saying into a digit string, replace the counts with a number and concatenate every saying.

// For example, the saying and conversion for digit string "3322251": 23321511

class Solution {
public:
    string say(string s){
        string result = "";
        int i = 0;
        int j = 0;
        int count = 0;
        while(j<s.length()){
            while(s[i] == s[j]){
                count++;
                j++;
            }
            result += to_string(count)  + s[i];
            count = 0;
            i = j;
        }
        return result;
    }
    string countAndSay(int n) {
        if(n == 1) return "1";
        else return say(countAndSay(n-1));
    }
};