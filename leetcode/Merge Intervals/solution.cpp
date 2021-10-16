//https://leetcode.com/problems/merge-intervals/
 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>mergedintervals;
        if(intervals.size()==0)
            return mergedintervals;
        sort(intervals.begin(),intervals.end());
        vector<int>tempintervals=intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=tempintervals[1])
            {
                tempintervals[1]=max(it[1],tempintervals[1]);
            }
            else
            {
                mergedintervals.push_back(tempintervals);
                tempintervals=it;
            }
        }
 mergedintervals.push_back(tempintervals);
      return mergedintervals;
        
    }