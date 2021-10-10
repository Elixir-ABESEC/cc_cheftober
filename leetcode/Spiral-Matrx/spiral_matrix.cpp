// https://leetcode.com/problems/spiral-matrix/



#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int r=matrix.size();
    int c=matrix[0].size();
    
    int min_r=0;
    int min_c=0;
    int max_r=r-1;
    int max_c=c-1;

    vector<int> v;
    
    int count=0;
    int te=r*c;         //total elements

    while(count<te){
        for(int i=min_r,j=min_c;j<=max_c  && count<te;j++){
            v.push_back(matrix[i][j]);
            count++;
        }
        min_r++;

        for(int i=min_r,j=max_c;i<=max_r && count<te;i++){
          v.push_back(matrix[i][j]);
            count++;
        }
        max_c--;

        for(int i=max_r,j=max_c;j>=min_c && count<te;j--){
           v.push_back(matrix[i][j]);
            count++;
        }
        max_r--;

        for(int i=max_r,j=min_c;i>=min_r && count<te;i--){
          v.push_back(matrix[i][j]);
        count++;
        }
        min_c++;


    }
        return v;
    }
};