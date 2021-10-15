//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j,i,n;
        n=nums.size();
         j=0;
        if(n==0)
            return(0);
        else
        {
        for(i=1;i<n;i++)
        {
            if(nums[i]!=nums[j])
            {
                j++;
            nums[j]=nums[i];
            }
            
        }
        
        return(j+1);
    }
        
    }
};
