//Leetcode - Rotate Image
// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

//Solution - Transpose the matrix and then reverse each row.
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        int temp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i!=j && i<j){
                    temp = matrix[i][j];
                    matrix[i][j] = matrix[j][i];
                    matrix[j][i] = temp;
                }
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i]);
        }
    }
    void reverse(vector<int>& v) {
        int n = v.size();
        int temp;
        for(int i=0;i<n/2;i++){
            temp = v[i];
            v[i] = v[n-i-1];
            v[n-i-1] = temp;
        }
    }
};