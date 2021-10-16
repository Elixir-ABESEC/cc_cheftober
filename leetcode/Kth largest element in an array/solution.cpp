//https://leetcode.com/problems/kth-largest-element-in-an-array/

int findKthLargest(vector<int>& nums, int k) {
        int i,n,c=1;
        n=nums.size();
        sort(nums.begin(),nums.end());
        for(i=n-1;i>=0;i--)
        {
            if(c==k)
            {
               break;
                
            }
            c++;
        }
        return nums[n-c];
    }